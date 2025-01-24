#include "WindowsController.h"

int main()
{
	std::cout << "GetActiveDirectoryAccount\n\t[" << MOONG::WindowsController::get_active_directory_account().c_str() << "]" << std::endl;

	std::cout << std::endl;

	std::cout << "GetDomain\n\t[" << MOONG::WindowsController::get_domain().c_str() << "]" << std::endl;

	std::cout << std::endl;

	std::cout << "GetPrimaryDomain\n\t[" << MOONG::WindowsController::get_primary_domain().c_str() << "]" << std::endl;

	std::cout << std::endl;

	std::cout << "GetSidString[" << MOONG::WindowsController::get_sid_string().c_str() << "]" << std::endl;

	std::cout << std::endl;

	std::string user_name;
	MOONG::WindowsController::get_user_name(user_name);
	std::cout << "GetUserName[" << user_name.c_str() << "]" << std::endl;

	std::cout << std::endl;

	std::cout << "GetWindowsProductName[" << MOONG::WindowsController::get_windows_product_name().c_str() << "]\n" << std::endl;
	MOONG::WindowsController::wow64_redirection_enable(TRUE);

	if (MOONG::WindowsController::wow64_redirection_enable(FALSE))
	{
		std::cout << "GetWindowsProductName[" << MOONG::WindowsController::get_windows_product_name().c_str() << "]\n" << std::endl;
		MOONG::WindowsController::wow64_redirection_enable(TRUE);
	}

	MOONG::WindowsController::messagebox_show_most_top("test text", "test caption", MB_OK);

	std::cout << std::endl;

	std::cout << "find_execute_program[" << MOONG::WindowsController::find_execute_program("html").c_str() << "]" << std::endl;

	std::cout << std::endl;

	std::cout << "credential_write[" << (MOONG::WindowsController::credential_write("INTERNET_OR_NETWORK_ADDRESS", "user_name", "password") == true ? "성공" : "실패") << "]" << std::endl;

	system("pause");

	std::cout << "credential_delete[" << (MOONG::WindowsController::credential_delete("INTERNET_OR_NETWORK_ADDRESS", CRED_TYPE_GENERIC) == true ? "성공" : "실패") << "]" << std::endl;

	return 0;
}