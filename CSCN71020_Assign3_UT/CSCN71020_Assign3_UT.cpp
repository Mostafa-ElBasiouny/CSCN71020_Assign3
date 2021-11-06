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

		// Test-Case:	Checks when Player1 chooses Rock and 
		//				Player2 chooses Scissors the winner is Player1.
		// Output:		Returns "Player1".
		TEST_METHOD(RPS_Player1_RockVSScissors)
		{
			char* winner = RPS("Rock", "Scissors");
			Assert::AreEqual("Player1", winner);
		}

		// Test-Case:	Checks when Player1 chooses Paper and 
		//				Player2 chooses Rock the winner is Player1.
		// Output:		Returns "Player1".
		TEST_METHOD(RPS_Player1_PaperVSRock)
		{
			char* winner = RPS("Paper", "Rock");
			Assert::AreEqual("Player1", winner);
		}

		// Test-Case:	Checks when Player1 chooses Scissors and 
		//				Player2 chooses Paper the winner is Player1.
		// Output:		Returns "Player1".
		TEST_METHOD(RPS_Player1_ScissorsVSPaper)
		{
			char* winner = RPS("Scissors", "Paper");
			Assert::AreEqual("Player1", winner);
		}

		// Test-Case:	Checks when Player1 chooses Scissors and 
		//				Player2 chooses Rock the winner is Player1.
		// Output:		Returns "Player2".
		TEST_METHOD(RPS_Player2_ScissorsVSRock)
		{
			char* winner = RPS("Scissors", "Rock");
			Assert::AreEqual("Player2", winner);
		}

		// Test-Case:	Checks when Player1 chooses Rock and 
		//				Player2 chooses Paper the winner is Player1.
		// Output:		Returns "Player2".
		TEST_METHOD(RPS_Player2_RockVSPaper)
		{
			char* winner = RPS("Rock", "Paper");
			Assert::AreEqual("Player2", winner);
		}

		// Test-Case:	Checks when Player1 chooses Paper and 
		//				Player2 chooses Scissors the winner is Player1.
		// Output:		Returns "Player2".
		TEST_METHOD(RPS_Player2_PaperVSScissors)
		{
			char* winner = RPS("Paper", "Scissors");
			Assert::AreEqual("Player2", winner);
		}
	};
}
