#include "catch.h"
#include "suchen.h"

TEST_CASE("Zeichenkette suchen, Text mit Laenge groesser 1, Zeichenkette mit Laenge groesser 1") 
{
	REQUIRE(zeichenkette_suchen("abcdabcde", "cda") == 2);
	REQUIRE(zeichenkette_suchen("abcdabcde", "de") == 7);
	REQUIRE(zeichenkette_suchen("abcdabcde", "dex") == -1);
	REQUIRE(zeichenkette_suchen("abcdabcde", "xyz") == -1);
	REQUIRE(zeichenkette_suchen("abcdabcde", "abcdabcd") == 0);
	REQUIRE(zeichenkette_suchen("abcdabcde", "abcdabcdx") == -1);
}
TEST_CASE("Zeichenkette suchen, Text mit Laenge groesser 1, Zeichenkette mit Laenge 1")
{
	REQUIRE(zeichenkette_suchen("abcdabcde", "a") == 0);
	REQUIRE(zeichenkette_suchen("abcdabcde", "c") == 2);
	REQUIRE(zeichenkette_suchen("abcdabcde", "e") == 8);
	REQUIRE(zeichenkette_suchen("abcdabcde", "x") == -1);
}
TEST_CASE("Zeichenkette suchen, Text mit Laenge 1") 
{
	REQUIRE(zeichenkette_suchen("a", "a") == 0);
	REQUIRE(zeichenkette_suchen("a", "c") == -1);
	REQUIRE(zeichenkette_suchen("a", "xy") == -1);
	REQUIRE(zeichenkette_suchen("a", "aa") == -1);
}
TEST_CASE("Zeichenkette suchen, leerer Text")
{
	REQUIRE(zeichenkette_suchen("", "") == -1);
	REQUIRE(zeichenkette_suchen("", "a") == -1);
	REQUIRE(zeichenkette_suchen("", "abc") == -1);
}