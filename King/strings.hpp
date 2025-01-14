//
//  strings.cpp
//  King
//
//  Created by tkvitko on 06.05.2024.
//

#ifndef strings_hpp
#define strings_hpp

#include <string>
#include <stdio.h>

const std::string QUESTION_ABOUT_INTRO = "Показать инструкцию (1) или не стоит (2)? ";
const std::string QUESTION_ABOUT_GAME_MODE = "Хотите сыграть обычную игру (1) или настроить вручную стартовые параметры (2)? ";
const std::string QUESTION_ABOUT_RANDOM_EVENTS = "Хотите играть со случайными событиями (1) или без них (2)? ";
const std::string QUESTION_ABOUT_COMPETITION = "Хотите ли вы видеть информацию для участия в конкурсе (1) или нет (2)? ";

const std::string INTRO_PART_1 = "Поздравляем! Вас только что избрали премьер-министром Сетац Детину - маленького коммунистического острова размером 30 на 70 миль. Ваша задача - управлять бюджетом страны и распределять деньги из общественной казны. Денежная единица - роллод, и каждому жителю нужно ";

const std::string INTRO_PART_2 = " роллодов в год, чтобы выжить. Доход поступает за счёт сельского хозяйства и туристов, посещающих ваши великолепные леса для охоты, рыбалки и просто прогулок. Часть вашей земли - сельскохозяйственная, но она так же богата полезными ископаемыми и может быть продана иностранной промышленности, которая привезёт своих собственных рабочих. Засев квадратной мили сельскохозяйственной земли стоит 10-15 роллодов в год. В случае нехватки сельскохозяйственной земли вы можете вырубить часть леса. Стоимость расчистки одной квадратной мили земли составляет 10 ролодов. Ваша цель - завершить ваш 8-летний срок правления. Удачи!\n\n";

const std::string GAME_OVER_SUCCESS = "Поздравляем! Вы успешно завершили ваш 8-летний срок на занимаемой должности. Конечно, вам чрезвычайно повезло. Тем не менее, это огромное достижение. Прощайте и удачи! Она, вероятно, вам пригодится, если вы из тех людей, которые играют в эту игру.";

const std::string GAME_OVER_BECAUSE_DIES = "Больше трети населения умерло с тех пор, как вы были избраны. Оставшееся население ненавидит вас.";

const std::string GAME_OVER_BECAUSE_BALANCE = "В казне остались не потраченные деньги. В результате некоторые жители умерли от голода. Население в ярости. Вы должны или уйти в отставку, или покончить с собой. Выбор за вами. Если выберете второе, просьба выключить компьютер перед тем, как приступите.";

const std::string GAME_OVER_BECAUSE_FOREINERS = "Число иностранных рабочих превысило число жителей. Из-за накопленного недовольства, они восстали и захватили власть в стране";

const std::string MESSAGE_ABOUT_DIES = " жителей умерло за год! Из-за такого ужасного управления вас не только лишили должности и сняли с занимаемого поста, ";

const std::string MESSAGE_ABOUT_DIES_END_1 = "но и выбили вам левый глаз!";
const std::string MESSAGE_ABOUT_DIES_END_2 = "ещё вы заработали очень плохую репутацию.";
const std::string MESSAGE_ABOUT_DIES_END_3 = "но и назвали предателем родины.";

#endif /* strings_hpp */
