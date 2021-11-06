#include "pch.h"
#include "CppUnitTest.h"

extern "C" char* RPS(char* playerOne, char* playerTwo);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CSCN71020Assign3UT
{
	TEST_CLASS(CSCN71020Assign3UT)
	{
	public:
		// All test methods uses the following naming convention:
		// [FUNCTION-UNDER-TEST]_[FUNCTION-OUTPUT]_[TEST-CASE]

		// Test-Case:	Checks if both players had the same choice.
		// Output:		Returns "Draw".
		TEST_METHOD(RPS_Draw_WhenBothInputsAreEqual)
		{
			char* winner = RPS("Rock", "Rock");
			Assert::AreEqual("Draw", winner);
		}

		// Test-Case:	Checks if any choice entered is invalid.
		// Output:		Returns "Invalid".
		TEST_METHOD(RPS_Invalid_WhenInputIsInvalid)
		{
			char* winner = RPS("Stick", "Paper");
			Assert::AreEqual("Invalid", winner);
		}
	};
}
