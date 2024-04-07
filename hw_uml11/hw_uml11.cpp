// hw_uml11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
//Façade
//Спроектируйте с помощью паттерна Façade программу, которая симулирует загрузку компьютера со всеми его устройствами.
//В компьютере, который необходимо описать, будут следующие основные узлы. 
//1. Видеокарта
//2. Оперативнаяпамять
//3. Винчестер
//4. Устройство чтения оптических дисков 5. Блок питания
//6. Датчики
//Для работы с каждым устройством требуется отдельный класс.При этом методы из этих классов будут выполнять некоторую работу(вывод в консольное окно строки о выполненном действии).Для более удобного использования этой системы необходимо реализовать класс Façade, который будет позволять вызовом только одного метода BeginWork запускать всю систему.
//Действия, необходимые для правильной загрузки.
//1. Блок питания : подать питание.
//2. Датчики : проверить напряжение.
//3. Датчики : проверить температуру в блоке питания.
//4. Датчики : проверить температуру в видеокарте.
//5. Блок питания : подать питание на видеокарту.
//6. Видеокарта : запуск.
//7. Видеокарта : проверка связи с монитором.
//8. Датчики : проверить температуру в оперативной памяти.
//9. Блок питания : подать питание на оперативную память. 
//10.Оперативная память : запуск устройств. 
//11.Оперативная память : анализ памяти.
//12.Видеокарта : вывод данных об оперативной памяти.
//13.Блок питания : подать питание на устройство чтения дисков.
//14.Устройство чтения оптических дисков : запуск.
//15.Устройство чтения оптических дисков : проверка наличия диска.
//16.Видеокарта : вывод информации об устройстве чтения дисков.
//17.Блок питания : подать питание на винчестер.
//18.Винчестер : запуск.
//19.Винчестер : проверка загрузочного сектора.
//20.Видеокарта : вывод данных о винчестере.
//21.Датчики : проверить температуру всех систем.
//Подразумевается, что ход загрузки не должен быть нарушен, но для
//реалистичности можно добавить в внутрь каждой функции логику случайной генерации положительного и отрицательного варианта выполнения.
//Дополните класс управления компьютером функциональностью для выключения компьютера.
//1. Винчестер : остановка устройства.
//2. Оперативнаяпамять : очисткапамяти.
//3. Оперативная память : анализ памяти.
//4. Видео карта : вывести на монитор данные прощальное сообщение.
//5. Устройство чтения дисков : вернуть в исходную позицию.
//6. Блокпитания : прекратитьпитаниевидеокарты.
//7. Блок питания : прекратить питание оперативной памяти.
//8. Блок питания : прекратить питание устройства чтения дисков.
//9. Блок питания : прекратить питание винчестера.
//10.Датчики проверить напряжение.
//11.Блок питания : выключение.
//Необходимо выводить на экран только информацию о том, что было выполнено то или иное действие(без данных).
//В классе, отвечающем за управление компьютером, должно быть два открытых метода для включения и выключения компьютера.


class VideoCard {
public:
	void StartVideoCard() {
		cout << "видеокартa: запуск успешно выполнен" << endl;
	}
	void ConnectToMonitor() {
		cout << "видеокартa: проверка связи с монитором" << endl;
	}
	void InfoAboutRAM() {
		cout << "видеокартa: вывод данных об оперативной памяти" << endl;
	}
	void InfoAboutWinchester() {
		cout << "видеокартa: вывод данных о винчестере" << endl;
	}
	void LastMessage() {
		cout << "видеокартa: бай-бай <3" << endl;
	}
};

class RAM {
public:
	void StartDevices() {
		cout << "оперативная память: запуск устройств" << endl;
	}
	void AnalyseMemory() {
		cout << "оперативная память: анализ памяти" << endl;
	}
	void ClearMemory() {
		cout << "оперативная память: очистка памяти" << endl;
	}
};

class Winchester {
public:
	void StartWin() {
		cout << "винчестер: запуск винчестера" << endl;
	}
	void CheckLoadingSector() {
		cout << "винчестер: проверка загрузочного сектора" << endl;
	}
	void StopWin() {
		cout << "винчестер: остановка винчестера" << endl;
	}
};

class Plug {
public:
	void ApplyPower() {
		cout << "блок питания: питание подано" << endl;
	}
	void ApplyPowerToVideoCard() {
		cout << "блок питания: питание на видеокарту подано" << endl;
	}
	void ApplyPowerToRAM() {
		cout << "блок питания: питание на оперативную память подано" << endl;
	}
	void ApplyPowerToWinchester() {
		cout << "блок питания: питание на винчестер подано" << endl;
	}
	void StopPowerToVideoCard() {
		cout << "блок питания: питание на видеокарту отключено" << endl;
	}
	void StopPowerToRAM() {
		cout << "блок питания: питание на оперативную память отключено" << endl;
	}
	void StopPowerToWinchester() {
		cout << "блок питания: питание на винчестер отключено" << endl;
	}
	void StopPower() {
		cout << "блок питания: питание отключено" << endl;
	}
};

class Sensors {
public:
	void CheckVoltage() {
		cout << "датчики: проверка напряжения" << endl;
	}
	void CheckTemperatureInPlug() {
		cout << "датчики: проверка температуры в блоке питания" << endl;
	}
	void CheckTemperatureInVideoCard() {
		cout << "датчики: проверка температуры в видеокарте" << endl;
	}
	void CheckTemperatureInRAM() {
		cout << "проверка температуры в оперативной памяти" << endl;
	}
	void CheckTemperatureAllSystem() {
		cout << "датчики: проверка температуры во всей системе" << endl;
	}
};

class PCFacade {
	VideoCard videocard;
	RAM ram;
	Sensors sensors;
	Winchester winchester;
	Plug plug;
public:
	PCFacade(VideoCard v, RAM r, Sensors s, Winchester w, Plug p) {
		videocard = v;
		ram = r;
		sensors = s;
		winchester = w;
		plug = p;
	}

	void Start() {
		cout << "запуск компьютера" << endl;
		videocard.StartVideoCard();
		videocard.ConnectToMonitor();
		videocard.InfoAboutRAM();
		videocard.InfoAboutWinchester();

		ram.StartDevices();
		ram.AnalyseMemory();

		sensors.CheckTemperatureAllSystem();
		sensors.CheckTemperatureInPlug();
		sensors.CheckTemperatureInRAM();
		sensors.CheckTemperatureInVideoCard();
		sensors.CheckVoltage();

		winchester.StartWin();
		winchester.CheckLoadingSector();

		plug.ApplyPower();
		plug.ApplyPowerToVideoCard();
		plug.ApplyPowerToRAM();
		plug.ApplyPowerToWinchester();
	}

	void Finish() {
		cout << endl;
		cout << "выключение компьютера" << endl;
		videocard.LastMessage();
		ram.ClearMemory();
		winchester.StopWin();
		plug.StopPowerToRAM();
		plug.StopPowerToVideoCard();
		plug.StopPowerToWinchester();
		plug.StopPower();
	}
};


class Client
{
public:
	void StartPC(PCFacade facade)
	{
		facade.Start();
		facade.Finish();
	}
};
int main()
{
	setlocale(LC_ALL, "");
	VideoCard videocard;
	RAM ram;
	Sensors sensors;
	Winchester winchester;
	Plug plug;

	PCFacade pc(videocard, ram, sensors, winchester, plug);
	Client client;
	client.StartPC(pc);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
