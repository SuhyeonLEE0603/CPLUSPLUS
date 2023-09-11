//-----------------------------------
// save.h ���б� ���Ǹ� �����ϴ� �Լ�
//-----------------------------------

#include "save.h"
#include <fstream>
#include <chrono>

//------------------------------------
void save(const std::string& fileName)
//------------------------------------
{
	// fileName�� �б� ���� ����
	std::ifstream in{ fileName };

	// ������ ������ ���ٿ����� ���� ����
	std::ofstream out{ "2023 2�б� C++ ��910��78 �������� �̼���.txt", std::ios::app };

	// ������ �ð��� ���Ͽ� ����Ѵ�.
	auto now = std::chrono::system_clock::now();				// time_point�� ��´�
	auto time = std::chrono::system_clock::to_time_t(now);	// UTC �ð����� ��ȯ
	auto lt = localtime(&time);									// ���� �ð����� ��ȯ
	auto old = out.imbue(std::locale("ko_KR"));					// �ѱ����� ����

	// �ð� ���
	out << '\n' << '\n';

	out << "==================================================" << '\n';
	out << fileName << std::put_time(lt, "%x %A %X") << '\n';
	out << "==================================================" << '\n';

	out.imbue(old);												// ������ ����

	// fileName�� �о� �������Ͽ� ���ٿ� ���� (STL �ڷᱸ���� �˰���)
	std::vector<char> v{ std::istreambuf_iterator<char>{in}, {} };
	std::copy(v.begin(), v.end(), std::ostream_iterator<char>{ out });
}