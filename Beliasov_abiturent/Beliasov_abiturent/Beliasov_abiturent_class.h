#pragma once
#include <iostream>
/**
@file      Beliasov_abiturent_class.h
@brief     Загловочный файл класса Beliasov_abiturent_class
@copyright ВоГУ
@author    Белясов Г.Ю.
@date      28 - 12 - 2023
@version   1.0.0
\par Использует классы :
@ref Beliasov_abiturent_class
\par Содержит класс :
@ref Beliasov_abiturent_class
*/

/// Класс описания абитурента
/** Содержит данные абитерента и методы работы с ним
*/
class Beliasov_abiturent_class
{
public:
	std::string surnameBeliasov; ///< Фамилия абитурента
	std::string nameBeliasov; ///< Имя абитурента
	std::string patronymicBeliasov; ///< Фамилия абитурента
	std::string adressBeliasov;  ///< Адрес абитурента
	int evaluationsBeliasov; ///< Оценки абитурента
	/// Конструктор класса по умолчанию
	/** Создаёт абитурента без инициализации свойств
	*/
	Beliasov_abiturent_class();
	/// Конструктор с заполнением всех свойств класса
	/** Создаёт  абитурента и инициализирует его свойства
	\param surnameBeliasov Фамилия создаваемого абитурента
	\param nameBeliasov Имя создаваемого абитурента
	\param patronymicBeliasov Отчество создаваемого абитурента
	\param adressBaranov Адрес создаваемого абитурента
	\param evaluationsBeliasov Оценки создаваемого абитурента
	*/
	Beliasov_abiturent_class(std::string surnameBeliasov, std::string nameBeliasov, std::string  patronymicBeliasov, std::string adressBeliasov, int evaluationsBeliasov);
	
	/// Показывает список абитурентов имеющих неудовлетворительные оценки
	/* Если сведений нет, то возвращает сообщение об ошибке
	\param evaluationsBeliasov оценки абитурента
	\param surnameBeliasov Фамилия абитурента
	*/
	void ShowabiturentlowevaluationsBeliasov(std::string surnameBeliasov, int evaluationsBeliasov);
	
	/// Показывает список абитурентов сумма баллов которых меньше заданной
	/* Если сведений нет, то возвращает сообщение об ошибке
	\param evaluationsBeliasov оценки абитурента
	\param currentevaluationsBeliasov заданная сумма баллов
	\param surnameBeliasov Фамилия абитурента
	*/
	void ShowabiturentsumevaluationsBeliasov(std::string surnameBeliasov, int evaluationsBeliasov, int currentevaluationsBeliasov);
	/// Показывает N абитуриентов, имеющих самую высокую сумму баллов, и список абитуриентов, имеющих полупроходной балл
	/* Если сведений нет, то возвращает сообщение об ошибке
	\param evaluationsBeliasov оценки абитурента
	\param currenteabiturentBeliasov колличество абитурентов, которое нужно показать
	\param surnameBeliasov Фамилия абитурента
	*/
	void ShowabiturenthighsumevaluationsBeliasov(std::string surnameBeliasov,  int evaluationsBeliasov, int currentabiturentBeliasov);
	
	/// Деструктор класса, освобождает ресурсы
	~Beliasov_abiturent_class();
};

