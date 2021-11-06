void main(void) {}

char* RPS(char* playerOne, char* playerTwo) {
	char* winner = "Invalid";
	if (playerOne == playerTwo)
		winner = "Draw";
	else if (playerOne == "Rock")
		winner = (playerTwo == "Scissors" ? "Player1" : "Player2");
	else if (playerOne == "Paper")
		winner = (playerTwo == "Rock" ? "Player1" : "Player2");
	else if (playerOne == "Scissors")
		winner = (playerTwo == "Paper" ? "Player1" : "Player2");

	return winner;
}