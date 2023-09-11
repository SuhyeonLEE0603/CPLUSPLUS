//-----------------------------------
// save.h 한학기 강의를 저장하는 함수
//-----------------------------------

#include "save.h"
#include <fstream>
#include <chrono>

//------------------------------------
void save(const std::string& fileName)
//------------------------------------
{
	// fileName을 읽기 모드로 연다
	std::ifstream in{ fileName };

	// 저장할 파일을 덧붙여쓰기 모드로 연다
	std::ofstream out{ "2023 2학기 C++ 월910수78 강의저장 이수현.txt", std::ios::app };

	// 저장한 시간을 파일에 기록한다.
	auto now = std::chrono::system_clock::now();				// time_point를 얻는다
	auto time = std::chrono::system_clock::to_time_t(now);	// UTC 시간으로 변환
	auto lt = localtime(&time);									// 현지 시간으로 변환
	auto old = out.imbue(std::locale("ko_KR"));					// 한국으로 변경

	// 시간 출력
	out << '\n' << '\n';

	out << "==================================================" << '\n';
	out << fileName << std::put_time(lt, "%x %A %X") << '\n';
	out << "==================================================" << '\n';

	out.imbue(old);												// 원래로 복귀

	// fileName을 읽어 저장파일에 덧붙여 쓴다 (STL 자료구조와 알고리즘)
	std::vector<char> v{ std::istreambuf_iterator<char>{in}, {} };
	std::copy(v.begin(), v.end(), std::ostream_iterator<char>{ out });
}