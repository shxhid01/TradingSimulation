/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QRadioButton *BuyAndHold;
    QLabel *TradingStrats;
    QRadioButton *MeanReversion;
    QRadioButton *TrendFollowing;
    QRadioButton *MovingAvg;
    QRadioButton *Random;
    QFrame *Divider;
    QLabel *NumDay1;
    QLabel *NumDay2;
    QRadioButton *Day50;
    QRadioButton *Day100;
    QRadioButton *Day200;
    QRadioButton *Day150;
    QRadioButton *Day800;
    QRadioButton *Day400;
    QRadioButton *Day2000;
    QRadioButton *Day1000;
    QFrame *Divider2;
    QLabel *UserInfo;
    QFrame *UserInfoLine;
    QFrame *MidBotLine;
    QLabel *Balance;
    QLabel *ProfitAndLoss;
    QPushButton *StartSim;
    QPushButton *exitButton;
    QLabel *Stocks;
    QLabel *UserName;
    QLabel *StockNum;
    QLabel *Bal_User;
    QTextBrowser *TradesTakenBox;
    QLabel *DaysForUpdate;
    QLineEdit *NumOfUpdates;
    QLabel *MarktInfo;
    QFrame *MarketLine;
    QLabel *CurrentPrice;
    QLabel *CurrentBalance;
    QLabel *TotalCurrentValue;
    QLabel *CurrentStrategy;
    QLabel *MarketVolatility;
    QLabel *PNLsinceStart;
    QLabel *PNL_LastUpdate;
    QLabel *PerformanceMetrics;
    QFrame *PerformaceMetricLine;
    QLabel *CumReturn;
    QLabel *MaxDrawDown;
    QLabel *Volatility;
    QLabel *SharpeRatio;
    QLabel *CumReturnNum;
    QLabel *MaxDrawDownNum;
    QLabel *VolatilityNum;
    QLabel *SharpeRatioNum;
    QLabel *CurrentPriceNum;
    QLabel *CurrentBalanceNum;
    QLabel *CurrentStrategyNum;
    QLabel *TotalCurrentValueNum;
    QLabel *MarketVolatilityNum;
    QLabel *PNLnum;
    QLabel *PNLnumLastUpdate;
    QLabel *DayNum;
    QPushButton *HelpButton;
    QLabel *PNLnum_2;
    QPushButton *ResetButton;
    QGraphicsView *StockGraph;
    QGraphicsView *BalGraph;
    QButtonGroup *NumDay;
    QButtonGroup *TradeStrats;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1400, 750);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMaximumSize(QSize(1400, 750));
        MainWindow->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        MainWindow->setTabShape(QTabWidget::TabShape::Rounded);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setMaximumSize(QSize(1400, 750));
        BuyAndHold = new QRadioButton(centralwidget);
        TradeStrats = new QButtonGroup(MainWindow);
        TradeStrats->setObjectName("TradeStrats");
        TradeStrats->addButton(BuyAndHold);
        BuyAndHold->setObjectName("BuyAndHold");
        BuyAndHold->setGeometry(QRect(1250, 60, 141, 41));
        sizePolicy.setHeightForWidth(BuyAndHold->sizePolicy().hasHeightForWidth());
        BuyAndHold->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(15);
        BuyAndHold->setFont(font);
        BuyAndHold->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        BuyAndHold->setIconSize(QSize(64, 64));
        BuyAndHold->setAutoRepeat(false);
        TradingStrats = new QLabel(centralwidget);
        TradingStrats->setObjectName("TradingStrats");
        TradingStrats->setGeometry(QRect(1240, 15, 141, 41));
        TradingStrats->setMaximumSize(QSize(151, 41));
        QFont font1;
        font1.setPointSize(18);
        TradingStrats->setFont(font1);
        TradingStrats->setLineWidth(1);
        TradingStrats->setTextFormat(Qt::TextFormat::RichText);
        TradingStrats->setAlignment(Qt::AlignmentFlag::AlignCenter);
        MeanReversion = new QRadioButton(centralwidget);
        TradeStrats->addButton(MeanReversion);
        MeanReversion->setObjectName("MeanReversion");
        MeanReversion->setGeometry(QRect(1250, 100, 141, 41));
        MeanReversion->setMaximumSize(QSize(141, 41));
        MeanReversion->setFont(font);
        MeanReversion->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        MeanReversion->setIconSize(QSize(64, 64));
        MeanReversion->setAutoRepeat(false);
        TrendFollowing = new QRadioButton(centralwidget);
        TradeStrats->addButton(TrendFollowing);
        TrendFollowing->setObjectName("TrendFollowing");
        TrendFollowing->setGeometry(QRect(1250, 180, 141, 41));
        TrendFollowing->setMaximumSize(QSize(141, 41));
        TrendFollowing->setFont(font);
        TrendFollowing->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        TrendFollowing->setIconSize(QSize(64, 64));
        TrendFollowing->setAutoRepeat(false);
        MovingAvg = new QRadioButton(centralwidget);
        TradeStrats->addButton(MovingAvg);
        MovingAvg->setObjectName("MovingAvg");
        MovingAvg->setGeometry(QRect(1250, 140, 141, 41));
        MovingAvg->setMaximumSize(QSize(141, 41));
        MovingAvg->setFont(font);
        MovingAvg->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        MovingAvg->setIconSize(QSize(64, 64));
        MovingAvg->setAutoRepeat(false);
        Random = new QRadioButton(centralwidget);
        TradeStrats->addButton(Random);
        Random->setObjectName("Random");
        Random->setGeometry(QRect(1250, 220, 111, 41));
        Random->setMaximumSize(QSize(141, 41));
        Random->setFont(font);
        Random->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        Random->setIconSize(QSize(64, 64));
        Random->setAutoRepeat(false);
        Divider = new QFrame(centralwidget);
        Divider->setObjectName("Divider");
        Divider->setGeometry(QRect(1220, 0, 16, 800));
        Divider->setFrameShape(QFrame::Shape::VLine);
        Divider->setFrameShadow(QFrame::Shadow::Sunken);
        NumDay1 = new QLabel(centralwidget);
        NumDay1->setObjectName("NumDay1");
        NumDay1->setGeometry(QRect(1240, 270, 141, 41));
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(NumDay1->sizePolicy().hasHeightForWidth());
        NumDay1->setSizePolicy(sizePolicy1);
        NumDay1->setFont(font1);
        NumDay1->setLineWidth(1);
        NumDay1->setTextFormat(Qt::TextFormat::RichText);
        NumDay1->setAlignment(Qt::AlignmentFlag::AlignCenter);
        NumDay2 = new QLabel(centralwidget);
        NumDay2->setObjectName("NumDay2");
        NumDay2->setGeometry(QRect(1240, 300, 151, 41));
        NumDay2->setFont(font1);
        NumDay2->setLineWidth(1);
        NumDay2->setTextFormat(Qt::TextFormat::RichText);
        NumDay2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        Day50 = new QRadioButton(centralwidget);
        NumDay = new QButtonGroup(MainWindow);
        NumDay->setObjectName("NumDay");
        NumDay->addButton(Day50);
        Day50->setObjectName("Day50");
        Day50->setGeometry(QRect(1250, 340, 41, 41));
        sizePolicy.setHeightForWidth(Day50->sizePolicy().hasHeightForWidth());
        Day50->setSizePolicy(sizePolicy);
        Day50->setMaximumSize(QSize(41, 41));
        Day50->setFont(font);
        Day50->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        Day50->setIconSize(QSize(64, 64));
        Day50->setAutoRepeat(false);
        Day100 = new QRadioButton(centralwidget);
        NumDay->addButton(Day100);
        Day100->setObjectName("Day100");
        Day100->setGeometry(QRect(1320, 340, 61, 41));
        sizePolicy.setHeightForWidth(Day100->sizePolicy().hasHeightForWidth());
        Day100->setSizePolicy(sizePolicy);
        Day100->setMaximumSize(QSize(61, 41));
        Day100->setFont(font);
        Day100->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        Day100->setIconSize(QSize(64, 64));
        Day100->setAutoRepeat(false);
        Day200 = new QRadioButton(centralwidget);
        NumDay->addButton(Day200);
        Day200->setObjectName("Day200");
        Day200->setGeometry(QRect(1320, 380, 61, 41));
        Day200->setMaximumSize(QSize(61, 41));
        Day200->setFont(font);
        Day200->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        Day200->setIconSize(QSize(64, 64));
        Day200->setAutoRepeat(false);
        Day150 = new QRadioButton(centralwidget);
        NumDay->addButton(Day150);
        Day150->setObjectName("Day150");
        Day150->setGeometry(QRect(1250, 380, 61, 41));
        sizePolicy.setHeightForWidth(Day150->sizePolicy().hasHeightForWidth());
        Day150->setSizePolicy(sizePolicy);
        Day150->setMaximumSize(QSize(61, 41));
        Day150->setFont(font);
        Day150->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        Day150->setIconSize(QSize(64, 64));
        Day150->setAutoRepeat(false);
        Day800 = new QRadioButton(centralwidget);
        NumDay->addButton(Day800);
        Day800->setObjectName("Day800");
        Day800->setGeometry(QRect(1320, 420, 61, 41));
        Day800->setMaximumSize(QSize(61, 41));
        Day800->setFont(font);
        Day800->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        Day800->setIconSize(QSize(64, 64));
        Day800->setAutoRepeat(false);
        Day400 = new QRadioButton(centralwidget);
        NumDay->addButton(Day400);
        Day400->setObjectName("Day400");
        Day400->setGeometry(QRect(1250, 420, 61, 41));
        Day400->setMaximumSize(QSize(61, 41));
        Day400->setFont(font);
        Day400->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        Day400->setIconSize(QSize(64, 64));
        Day400->setAutoRepeat(false);
        Day2000 = new QRadioButton(centralwidget);
        NumDay->addButton(Day2000);
        Day2000->setObjectName("Day2000");
        Day2000->setGeometry(QRect(1320, 460, 61, 41));
        Day2000->setMaximumSize(QSize(61, 41));
        Day2000->setFont(font);
        Day2000->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        Day2000->setIconSize(QSize(64, 64));
        Day2000->setAutoRepeat(false);
        Day1000 = new QRadioButton(centralwidget);
        NumDay->addButton(Day1000);
        Day1000->setObjectName("Day1000");
        Day1000->setGeometry(QRect(1250, 460, 61, 41));
        Day1000->setMaximumSize(QSize(61, 41));
        Day1000->setFont(font);
        Day1000->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        Day1000->setIconSize(QSize(64, 64));
        Day1000->setAutoRepeat(false);
        Divider2 = new QFrame(centralwidget);
        Divider2->setObjectName("Divider2");
        Divider2->setGeometry(QRect(178, 0, 20, 800));
        Divider2->setFrameShape(QFrame::Shape::VLine);
        Divider2->setFrameShadow(QFrame::Shadow::Sunken);
        UserInfo = new QLabel(centralwidget);
        UserInfo->setObjectName("UserInfo");
        UserInfo->setGeometry(QRect(5, 10, 71, 20));
        UserInfo->setMaximumSize(QSize(220, 35));
        QFont font2;
        font2.setPointSize(16);
        UserInfo->setFont(font2);
        UserInfo->setTextFormat(Qt::TextFormat::MarkdownText);
        UserInfo->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        UserInfoLine = new QFrame(centralwidget);
        UserInfoLine->setObjectName("UserInfoLine");
        UserInfoLine->setGeometry(QRect(0, 20, 187, 16));
        UserInfoLine->setFrameShape(QFrame::Shape::HLine);
        UserInfoLine->setFrameShadow(QFrame::Shadow::Sunken);
        MidBotLine = new QFrame(centralwidget);
        MidBotLine->setObjectName("MidBotLine");
        MidBotLine->setGeometry(QRect(187, 600, 1041, 20));
        MidBotLine->setFrameShape(QFrame::Shape::HLine);
        MidBotLine->setFrameShadow(QFrame::Shadow::Sunken);
        Balance = new QLabel(centralwidget);
        Balance->setObjectName("Balance");
        Balance->setGeometry(QRect(5, 30, 180, 25));
        Balance->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        ProfitAndLoss = new QLabel(centralwidget);
        ProfitAndLoss->setObjectName("ProfitAndLoss");
        ProfitAndLoss->setGeometry(QRect(5, 55, 91, 25));
        StartSim = new QPushButton(centralwidget);
        StartSim->setObjectName("StartSim");
        StartSim->setGeometry(QRect(1245, 560, 121, 41));
        sizePolicy.setHeightForWidth(StartSim->sizePolicy().hasHeightForWidth());
        StartSim->setSizePolicy(sizePolicy);
        StartSim->setMaximumSize(QSize(121, 41));
        QFont font3;
        font3.setBold(true);
        font3.setUnderline(true);
        font3.setKerning(true);
        StartSim->setFont(font3);
        StartSim->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        StartSim->setFocusPolicy(Qt::FocusPolicy::ClickFocus);
        exitButton = new QPushButton(centralwidget);
        exitButton->setObjectName("exitButton");
        exitButton->setGeometry(QRect(1245, 600, 121, 41));
        sizePolicy.setHeightForWidth(exitButton->sizePolicy().hasHeightForWidth());
        exitButton->setSizePolicy(sizePolicy);
        exitButton->setFont(font3);
        exitButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        exitButton->setFocusPolicy(Qt::FocusPolicy::ClickFocus);
        Stocks = new QLabel(centralwidget);
        Stocks->setObjectName("Stocks");
        Stocks->setGeometry(QRect(5, 80, 180, 25));
        UserName = new QLabel(centralwidget);
        UserName->setObjectName("UserName");
        UserName->setGeometry(QRect(75, 10, 101, 20));
        UserName->setMaximumSize(QSize(220, 35));
        UserName->setFont(font2);
        UserName->setTextFormat(Qt::TextFormat::MarkdownText);
        UserName->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        StockNum = new QLabel(centralwidget);
        StockNum->setObjectName("StockNum");
        StockNum->setGeometry(QRect(95, 80, 51, 25));
        Bal_User = new QLabel(centralwidget);
        Bal_User->setObjectName("Bal_User");
        Bal_User->setGeometry(QRect(69, 30, 111, 25));
        Bal_User->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        TradesTakenBox = new QTextBrowser(centralwidget);
        TradesTakenBox->setObjectName("TradesTakenBox");
        TradesTakenBox->setGeometry(QRect(187, 610, 1041, 141));
        TradesTakenBox->setAutoFillBackground(false);
        TradesTakenBox->setStyleSheet(QString::fromUtf8("TradesTakenBox.setStyleSheet(\"background-color: rgb(50, 50, 50);\");"));
        TradesTakenBox->setFrameShadow(QFrame::Shadow::Plain);
        TradesTakenBox->setMidLineWidth(-1);
        TradesTakenBox->setOpenLinks(false);
        DaysForUpdate = new QLabel(centralwidget);
        DaysForUpdate->setObjectName("DaysForUpdate");
        DaysForUpdate->setGeometry(QRect(1230, 500, 161, 21));
        DaysForUpdate->setMaximumSize(QSize(161, 21));
        QFont font4;
        font4.setPointSize(14);
        DaysForUpdate->setFont(font4);
        DaysForUpdate->setAlignment(Qt::AlignmentFlag::AlignCenter);
        NumOfUpdates = new QLineEdit(centralwidget);
        NumOfUpdates->setObjectName("NumOfUpdates");
        NumOfUpdates->setGeometry(QRect(1240, 530, 131, 31));
        NumOfUpdates->setMaximumSize(QSize(141, 31));
        NumOfUpdates->setAlignment(Qt::AlignmentFlag::AlignCenter);
        MarktInfo = new QLabel(centralwidget);
        MarktInfo->setObjectName("MarktInfo");
        MarktInfo->setGeometry(QRect(5, 289, 111, 31));
        MarktInfo->setFont(font);
        MarktInfo->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        MarketLine = new QFrame(centralwidget);
        MarketLine->setObjectName("MarketLine");
        MarketLine->setGeometry(QRect(0, 310, 187, 16));
        MarketLine->setFrameShape(QFrame::Shape::HLine);
        MarketLine->setFrameShadow(QFrame::Shadow::Sunken);
        CurrentPrice = new QLabel(centralwidget);
        CurrentPrice->setObjectName("CurrentPrice");
        CurrentPrice->setGeometry(QRect(5, 330, 91, 20));
        CurrentPrice->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        CurrentBalance = new QLabel(centralwidget);
        CurrentBalance->setObjectName("CurrentBalance");
        CurrentBalance->setGeometry(QRect(5, 360, 111, 20));
        CurrentBalance->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        TotalCurrentValue = new QLabel(centralwidget);
        TotalCurrentValue->setObjectName("TotalCurrentValue");
        TotalCurrentValue->setGeometry(QRect(5, 420, 121, 20));
        TotalCurrentValue->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        CurrentStrategy = new QLabel(centralwidget);
        CurrentStrategy->setObjectName("CurrentStrategy");
        CurrentStrategy->setGeometry(QRect(5, 390, 61, 20));
        CurrentStrategy->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        MarketVolatility = new QLabel(centralwidget);
        MarketVolatility->setObjectName("MarketVolatility");
        MarketVolatility->setGeometry(QRect(5, 450, 101, 20));
        MarketVolatility->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        PNLsinceStart = new QLabel(centralwidget);
        PNLsinceStart->setObjectName("PNLsinceStart");
        PNLsinceStart->setGeometry(QRect(0, 470, 181, 20));
        PNLsinceStart->setAlignment(Qt::AlignmentFlag::AlignCenter);
        PNL_LastUpdate = new QLabel(centralwidget);
        PNL_LastUpdate->setObjectName("PNL_LastUpdate");
        PNL_LastUpdate->setGeometry(QRect(0, 520, 181, 20));
        PNL_LastUpdate->setAlignment(Qt::AlignmentFlag::AlignCenter);
        PerformanceMetrics = new QLabel(centralwidget);
        PerformanceMetrics->setObjectName("PerformanceMetrics");
        PerformanceMetrics->setGeometry(QRect(0, 119, 181, 31));
        PerformanceMetrics->setFont(font);
        PerformanceMetrics->setAlignment(Qt::AlignmentFlag::AlignCenter);
        PerformaceMetricLine = new QFrame(centralwidget);
        PerformaceMetricLine->setObjectName("PerformaceMetricLine");
        PerformaceMetricLine->setGeometry(QRect(0, 140, 187, 16));
        PerformaceMetricLine->setFrameShape(QFrame::Shape::HLine);
        PerformaceMetricLine->setFrameShadow(QFrame::Shadow::Sunken);
        CumReturn = new QLabel(centralwidget);
        CumReturn->setObjectName("CumReturn");
        CumReturn->setGeometry(QRect(5, 160, 121, 16));
        MaxDrawDown = new QLabel(centralwidget);
        MaxDrawDown->setObjectName("MaxDrawDown");
        MaxDrawDown->setGeometry(QRect(5, 190, 131, 16));
        Volatility = new QLabel(centralwidget);
        Volatility->setObjectName("Volatility");
        Volatility->setGeometry(QRect(5, 220, 61, 20));
        SharpeRatio = new QLabel(centralwidget);
        SharpeRatio->setObjectName("SharpeRatio");
        SharpeRatio->setGeometry(QRect(5, 250, 81, 20));
        CumReturnNum = new QLabel(centralwidget);
        CumReturnNum->setObjectName("CumReturnNum");
        CumReturnNum->setGeometry(QRect(121, 160, 71, 16));
        MaxDrawDownNum = new QLabel(centralwidget);
        MaxDrawDownNum->setObjectName("MaxDrawDownNum");
        MaxDrawDownNum->setGeometry(QRect(135, 190, 41, 16));
        VolatilityNum = new QLabel(centralwidget);
        VolatilityNum->setObjectName("VolatilityNum");
        VolatilityNum->setGeometry(QRect(61, 220, 121, 20));
        SharpeRatioNum = new QLabel(centralwidget);
        SharpeRatioNum->setObjectName("SharpeRatioNum");
        SharpeRatioNum->setGeometry(QRect(87, 250, 91, 20));
        CurrentPriceNum = new QLabel(centralwidget);
        CurrentPriceNum->setObjectName("CurrentPriceNum");
        CurrentPriceNum->setGeometry(QRect(90, 330, 91, 20));
        CurrentPriceNum->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        CurrentBalanceNum = new QLabel(centralwidget);
        CurrentBalanceNum->setObjectName("CurrentBalanceNum");
        CurrentBalanceNum->setGeometry(QRect(110, 360, 71, 20));
        CurrentBalanceNum->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        CurrentStrategyNum = new QLabel(centralwidget);
        CurrentStrategyNum->setObjectName("CurrentStrategyNum");
        CurrentStrategyNum->setGeometry(QRect(60, 390, 121, 20));
        CurrentStrategyNum->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        TotalCurrentValueNum = new QLabel(centralwidget);
        TotalCurrentValueNum->setObjectName("TotalCurrentValueNum");
        TotalCurrentValueNum->setGeometry(QRect(125, 420, 61, 20));
        TotalCurrentValueNum->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        MarketVolatilityNum = new QLabel(centralwidget);
        MarketVolatilityNum->setObjectName("MarketVolatilityNum");
        MarketVolatilityNum->setGeometry(QRect(105, 450, 71, 20));
        MarketVolatilityNum->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        PNLnum = new QLabel(centralwidget);
        PNLnum->setObjectName("PNLnum");
        PNLnum->setGeometry(QRect(10, 490, 181, 20));
        PNLnum->setAlignment(Qt::AlignmentFlag::AlignCenter);
        PNLnumLastUpdate = new QLabel(centralwidget);
        PNLnumLastUpdate->setObjectName("PNLnumLastUpdate");
        PNLnumLastUpdate->setGeometry(QRect(0, 540, 181, 20));
        PNLnumLastUpdate->setAlignment(Qt::AlignmentFlag::AlignCenter);
        DayNum = new QLabel(centralwidget);
        DayNum->setObjectName("DayNum");
        DayNum->setGeometry(QRect(115, 289, 71, 31));
        DayNum->setFont(font);
        DayNum->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        HelpButton = new QPushButton(centralwidget);
        HelpButton->setObjectName("HelpButton");
        HelpButton->setGeometry(QRect(1245, 640, 121, 41));
        QFont font5;
        font5.setBold(true);
        font5.setUnderline(true);
        HelpButton->setFont(font5);
        PNLnum_2 = new QLabel(centralwidget);
        PNLnum_2->setObjectName("PNLnum_2");
        PNLnum_2->setGeometry(QRect(101, 55, 81, 25));
        ResetButton = new QPushButton(centralwidget);
        ResetButton->setObjectName("ResetButton");
        ResetButton->setGeometry(QRect(1245, 680, 121, 41));
        ResetButton->setFont(font5);
        StockGraph = new QGraphicsView(centralwidget);
        StockGraph->setObjectName("StockGraph");
        StockGraph->setGeometry(QRect(187, 0, 1041, 307));
        BalGraph = new QGraphicsView(centralwidget);
        BalGraph->setObjectName("BalGraph");
        BalGraph->setGeometry(QRect(187, 305, 1041, 305));
        MainWindow->setCentralWidget(centralwidget);
        BuyAndHold->raise();
        TradingStrats->raise();
        MeanReversion->raise();
        TrendFollowing->raise();
        MovingAvg->raise();
        Random->raise();
        NumDay1->raise();
        NumDay2->raise();
        Day50->raise();
        Day100->raise();
        Day200->raise();
        Day150->raise();
        Day800->raise();
        Day400->raise();
        Day2000->raise();
        Day1000->raise();
        Divider2->raise();
        UserInfo->raise();
        UserInfoLine->raise();
        MidBotLine->raise();
        Divider->raise();
        Balance->raise();
        ProfitAndLoss->raise();
        StartSim->raise();
        exitButton->raise();
        Stocks->raise();
        UserName->raise();
        StockNum->raise();
        Bal_User->raise();
        TradesTakenBox->raise();
        DaysForUpdate->raise();
        NumOfUpdates->raise();
        MarktInfo->raise();
        MarketLine->raise();
        CurrentPrice->raise();
        CurrentBalance->raise();
        TotalCurrentValue->raise();
        CurrentStrategy->raise();
        MarketVolatility->raise();
        PNLsinceStart->raise();
        PNL_LastUpdate->raise();
        PerformanceMetrics->raise();
        PerformaceMetricLine->raise();
        CumReturn->raise();
        MaxDrawDown->raise();
        Volatility->raise();
        SharpeRatio->raise();
        CumReturnNum->raise();
        MaxDrawDownNum->raise();
        VolatilityNum->raise();
        SharpeRatioNum->raise();
        CurrentPriceNum->raise();
        CurrentBalanceNum->raise();
        CurrentStrategyNum->raise();
        TotalCurrentValueNum->raise();
        MarketVolatilityNum->raise();
        PNLnum->raise();
        PNLnumLastUpdate->raise();
        DayNum->raise();
        HelpButton->raise();
        PNLnum_2->raise();
        ResetButton->raise();
        StockGraph->raise();
        BalGraph->raise();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Stock Trading Simulator", nullptr));
        BuyAndHold->setText(QCoreApplication::translate("MainWindow", "Buy & Hold", nullptr));
        TradingStrats->setText(QCoreApplication::translate("MainWindow", "Trading Strategy", nullptr));
        MeanReversion->setText(QCoreApplication::translate("MainWindow", "Mean Reversion", nullptr));
        TrendFollowing->setText(QCoreApplication::translate("MainWindow", "Trend Following", nullptr));
        MovingAvg->setText(QCoreApplication::translate("MainWindow", "Moving Average", nullptr));
        Random->setText(QCoreApplication::translate("MainWindow", "Random", nullptr));
        NumDay1->setText(QCoreApplication::translate("MainWindow", "Number Of Days", nullptr));
        NumDay2->setText(QCoreApplication::translate("MainWindow", "To Simulate", nullptr));
        Day50->setText(QCoreApplication::translate("MainWindow", "50", nullptr));
        Day100->setText(QCoreApplication::translate("MainWindow", "100", nullptr));
        Day200->setText(QCoreApplication::translate("MainWindow", "200", nullptr));
        Day150->setText(QCoreApplication::translate("MainWindow", "150", nullptr));
        Day800->setText(QCoreApplication::translate("MainWindow", "800", nullptr));
        Day400->setText(QCoreApplication::translate("MainWindow", "400", nullptr));
        Day2000->setText(QCoreApplication::translate("MainWindow", "2000", nullptr));
        Day1000->setText(QCoreApplication::translate("MainWindow", "1000", nullptr));
        UserInfo->setText(QCoreApplication::translate("MainWindow", "User Info:", nullptr));
        Balance->setText(QCoreApplication::translate("MainWindow", "Balance: $", nullptr));
        ProfitAndLoss->setText(QCoreApplication::translate("MainWindow", "Profit & Loss: $", nullptr));
        StartSim->setText(QCoreApplication::translate("MainWindow", "Start Simulation", nullptr));
        exitButton->setText(QCoreApplication::translate("MainWindow", "Exit Sim", nullptr));
        Stocks->setText(QCoreApplication::translate("MainWindow", "Stocks Owned:", nullptr));
        UserName->setText(QCoreApplication::translate("MainWindow", "s", nullptr));
        StockNum->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        Bal_User->setText(QString());
        DaysForUpdate->setText(QCoreApplication::translate("MainWindow", "Number of Updates", nullptr));
        NumOfUpdates->setPlaceholderText(QCoreApplication::translate("MainWindow", "Number of Updates:", nullptr));
        MarktInfo->setText(QCoreApplication::translate("MainWindow", "Market Info Day:", nullptr));
        CurrentPrice->setText(QCoreApplication::translate("MainWindow", "Current Price:", nullptr));
        CurrentBalance->setText(QCoreApplication::translate("MainWindow", "Current Balance:", nullptr));
        TotalCurrentValue->setText(QCoreApplication::translate("MainWindow", "Total Current Value:", nullptr));
        CurrentStrategy->setText(QCoreApplication::translate("MainWindow", "Strategy:", nullptr));
        MarketVolatility->setText(QCoreApplication::translate("MainWindow", "Market Volatility:", nullptr));
        PNLsinceStart->setText(QCoreApplication::translate("MainWindow", "Profit/Loss Since start", nullptr));
        PNL_LastUpdate->setText(QCoreApplication::translate("MainWindow", "Profit/Loss Since Last Update", nullptr));
        PerformanceMetrics->setText(QCoreApplication::translate("MainWindow", "Perforamce Metrics", nullptr));
        CumReturn->setText(QCoreApplication::translate("MainWindow", "Cumulative Return:", nullptr));
        MaxDrawDown->setText(QCoreApplication::translate("MainWindow", "Maximum Drawdown:", nullptr));
        Volatility->setText(QCoreApplication::translate("MainWindow", "Volatility:", nullptr));
        SharpeRatio->setText(QCoreApplication::translate("MainWindow", "Sharpe Ratio:", nullptr));
        CumReturnNum->setText(QCoreApplication::translate("MainWindow", "0%", nullptr));
        MaxDrawDownNum->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        VolatilityNum->setText(QCoreApplication::translate("MainWindow", "0.0", nullptr));
        SharpeRatioNum->setText(QCoreApplication::translate("MainWindow", "0.0", nullptr));
        CurrentPriceNum->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        CurrentBalanceNum->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        CurrentStrategyNum->setText(QCoreApplication::translate("MainWindow", "None", nullptr));
        TotalCurrentValueNum->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        MarketVolatilityNum->setText(QCoreApplication::translate("MainWindow", "0.0", nullptr));
        PNLnum->setText(QString());
        PNLnumLastUpdate->setText(QString());
        DayNum->setText(QString());
        HelpButton->setText(QCoreApplication::translate("MainWindow", "Help", nullptr));
        PNLnum_2->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        ResetButton->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
