#include <KeyBoardNavigation.h>
#include <KeyBoardNavigation$1.h>
#include <KeyBoardNavigation$2.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/DefaultCellEditor.h>
#include <javax/swing/JApplet.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JTable.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/BevelBorder.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/table/DefaultTableCellRenderer.h>
#include <javax/swing/table/TableCellRenderer.h>
#include <javax/swing/table/TableColumn.h>
#include <javax/swing/table/TableModel.h>
#include <jcpp.h>

#undef AUTO_RESIZE_OFF
#undef LOWERED
#undef RIGHT

using $KeyBoardNavigation$1 = ::KeyBoardNavigation$1;
using $KeyBoardNavigation$2 = ::KeyBoardNavigation$2;
using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $Color = ::java::awt::Color;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $DefaultCellEditor = ::javax::swing::DefaultCellEditor;
using $JApplet = ::javax::swing::JApplet;
using $JComboBox = ::javax::swing::JComboBox;
using $JLabel = ::javax::swing::JLabel;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JTable = ::javax::swing::JTable;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $BevelBorder = ::javax::swing::border::BevelBorder;
using $DefaultTableCellRenderer = ::javax::swing::table::DefaultTableCellRenderer;
using $TableCellRenderer = ::javax::swing::table::TableCellRenderer;
using $TableColumn = ::javax::swing::table::TableColumn;
using $TableModel = ::javax::swing::table::TableModel;

class KeyBoardNavigation$$Lambda$lambda$init$0 : public $Runnable {
	$class(KeyBoardNavigation$$Lambda$lambda$init$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$(KeyBoardNavigation* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->lambda$init$0();
	}
	KeyBoardNavigation* inst$ = nullptr;
};
$Class* KeyBoardNavigation$$Lambda$lambda$init$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(KeyBoardNavigation$$Lambda$lambda$init$0, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LKeyBoardNavigation;)V", nullptr, $PUBLIC, $method(KeyBoardNavigation$$Lambda$lambda$init$0, init$, void, KeyBoardNavigation*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(KeyBoardNavigation$$Lambda$lambda$init$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"KeyBoardNavigation$$Lambda$lambda$init$0",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(KeyBoardNavigation$$Lambda$lambda$init$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(KeyBoardNavigation$$Lambda$lambda$init$0);
	});
	return class$;
}
$Class* KeyBoardNavigation$$Lambda$lambda$init$0::class$ = nullptr;

void KeyBoardNavigation::init$() {
	$JApplet::init$();
}

void KeyBoardNavigation::initTest($Container* contentPane) {
	$init(KeyBoardNavigation);
	$useLocalObjectStack();
	$var($StringArray, names, $new($StringArray, {
		"First Name"_s,
		"Last Name"_s,
		"Favorite Color"_s,
		"Favorite Number"_s,
		"Vegetarian"_s
	}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"Mark"_s,
			"Andrews"_s,
			"Red"_s,
			$$new($Integer, 2),
			$$new($Boolean, true)
		}),
		$$new($ObjectArray, {
			"Tom"_s,
			"Ball"_s,
			"Blue"_s,
			$$new($Integer, 99),
			$$new($Boolean, false)
		}),
		$$new($ObjectArray, {
			"Alan"_s,
			"Chung"_s,
			"Green"_s,
			$$new($Integer, 838),
			$$new($Boolean, false)
		}),
		$$new($ObjectArray, {
			"Jeff"_s,
			"Dinkins"_s,
			"Turquois"_s,
			$$new($Integer, 8),
			$$new($Boolean, true)
		}),
		$$new($ObjectArray, {
			"Amy"_s,
			"Fowler"_s,
			"Yellow"_s,
			$$new($Integer, 3),
			$$new($Boolean, false)
		}),
		$$new($ObjectArray, {
			"Brian"_s,
			"Gerhold"_s,
			"Green"_s,
			$$new($Integer, 0),
			$$new($Boolean, false)
		}),
		$$new($ObjectArray, {
			"James"_s,
			"Gosling"_s,
			"Pink"_s,
			$$new($Integer, 21),
			$$new($Boolean, false)
		}),
		$$new($ObjectArray, {
			"David"_s,
			"Karlton"_s,
			"Red"_s,
			$$new($Integer, 1),
			$$new($Boolean, false)
		}),
		$$new($ObjectArray, {
			"Dave"_s,
			"Kloba"_s,
			"Yellow"_s,
			$$new($Integer, 14),
			$$new($Boolean, false)
		}),
		$$new($ObjectArray, {
			"Peter"_s,
			"Korn"_s,
			"Purple"_s,
			$$new($Integer, 12),
			$$new($Boolean, false)
		}),
		$$new($ObjectArray, {
			"Phil"_s,
			"Milne"_s,
			"Purple"_s,
			$$new($Integer, 3),
			$$new($Boolean, false)
		}),
		$$new($ObjectArray, {
			"Dave"_s,
			"Moore"_s,
			"Green"_s,
			$$new($Integer, 88),
			$$new($Boolean, false)
		}),
		$$new($ObjectArray, {
			"Hans"_s,
			"Muller"_s,
			"Maroon"_s,
			$$new($Integer, 5),
			$$new($Boolean, false)
		}),
		$$new($ObjectArray, {
			"Rick"_s,
			"Levenson"_s,
			"Blue"_s,
			$$new($Integer, 2),
			$$new($Boolean, false)
		}),
		$$new($ObjectArray, {
			"Tim"_s,
			"Prinzing"_s,
			"Blue"_s,
			$$new($Integer, 22),
			$$new($Boolean, false)
		}),
		$$new($ObjectArray, {
			"Chester"_s,
			"Rose"_s,
			"Black"_s,
			$$new($Integer, 0),
			$$new($Boolean, false)
		}),
		$$new($ObjectArray, {
			"Ray"_s,
			"Ryan"_s,
			"Gray"_s,
			$$new($Integer, 77),
			$$new($Boolean, false)
		}),
		$$new($ObjectArray, {
			"Georges"_s,
			"Saab"_s,
			"Red"_s,
			$$new($Integer, 4),
			$$new($Boolean, false)
		}),
		$$new($ObjectArray, {
			"Willie"_s,
			"Walker"_s,
			"Phthalo Blue"_s,
			$$new($Integer, 4),
			$$new($Boolean, false)
		}),
		$$new($ObjectArray, {
			"Kathy"_s,
			"Walrath"_s,
			"Blue"_s,
			$$new($Integer, 8),
			$$new($Boolean, false)
		}),
		$$new($ObjectArray, {
			"Arnaud"_s,
			"Weber"_s,
			"Green"_s,
			$$new($Integer, 44),
			$$new($Boolean, false)
		})
	}));
	$var($TableModel, dataModel, $new($KeyBoardNavigation$1, names, data));
	$var($JTable, tableView, $new($JTable, dataModel));
	tableView->setAutoResizeMode($JTable::AUTO_RESIZE_OFF);
	$var($JComboBox, comboBox, $new($JComboBox));
	comboBox->addItem("Red"_s);
	comboBox->addItem("Orange"_s);
	comboBox->addItem("Yellow"_s);
	comboBox->addItem("Green"_s);
	comboBox->addItem("Blue"_s);
	comboBox->addItem("Indigo"_s);
	comboBox->addItem("Violet"_s);
	$var($TableColumn, colorColumn, tableView->getColumn("Favorite Color"_s));
	$nc(colorColumn)->setCellEditor($$new($DefaultCellEditor, comboBox));
	$var($DefaultTableCellRenderer, colorColumnRenderer, $new($DefaultTableCellRenderer));
	$init($Color);
	colorColumnRenderer->setBackground($Color::pink);
	colorColumnRenderer->setToolTipText("Click for combo box"_s);
	colorColumn->setCellRenderer(colorColumnRenderer);
	$var($TableCellRenderer, headerRenderer, colorColumn->getHeaderRenderer());
	if ($instanceOf($DefaultTableCellRenderer, headerRenderer)) {
		$cast($DefaultTableCellRenderer, headerRenderer)->setToolTipText("Hi Mom!"_s);
	}
	$var($TableColumn, vegetarianColumn, tableView->getColumn("Vegetarian"_s));
	$nc(vegetarianColumn)->setPreferredWidth(100);
	$var($TableColumn, numbersColumn, tableView->getColumn("Favorite Number"_s));
	$var($DefaultTableCellRenderer, numberColumnRenderer, $new($KeyBoardNavigation$2));
	numberColumnRenderer->setHorizontalAlignment($JLabel::RIGHT);
	$nc(numbersColumn)->setCellRenderer(numberColumnRenderer);
	numbersColumn->setPreferredWidth(110);
	$var($JScrollPane, scrollpane, $new($JScrollPane, tableView));
	scrollpane->setBorder($$new($BevelBorder, $BevelBorder::LOWERED));
	scrollpane->setPreferredSize($$new($Dimension, 430, 200));
	$nc(contentPane)->add(scrollpane);
}

void KeyBoardNavigation::init() {
	$SwingUtilities::invokeLater($$new(KeyBoardNavigation$$Lambda$lambda$init$0, this));
}

void KeyBoardNavigation::lambda$init$0() {
	try {
		$UIManager::setLookAndFeel("javax.swing.plaf.metal.MetalLookAndFeel"_s);
	} catch ($Exception& e) {
		$throwNew($RuntimeException, e);
	}
	initTest($(getContentPane()));
}

KeyBoardNavigation::KeyBoardNavigation() {
}

$Class* KeyBoardNavigation::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("KeyBoardNavigation$$Lambda$lambda$init$0")) {
			return KeyBoardNavigation$$Lambda$lambda$init$0::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(KeyBoardNavigation, init$, void)},
		{"init", "()V", nullptr, $PUBLIC, $virtualMethod(KeyBoardNavigation, init, void)},
		{"initTest", "(Ljava/awt/Container;)V", nullptr, $STATIC, $staticMethod(KeyBoardNavigation, initTest, void, $Container*)},
		{"lambda$init$0", "()V", nullptr, $PRIVATE | $SYNTHETIC, $method(KeyBoardNavigation, lambda$init$0, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"KeyBoardNavigation$2", nullptr, nullptr, 0},
		{"KeyBoardNavigation$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"KeyBoardNavigation",
		"javax.swing.JApplet",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"KeyBoardNavigation$2,KeyBoardNavigation$1"
	};
	$loadClass(KeyBoardNavigation, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(KeyBoardNavigation));
	});
	return class$;
}

$Class* KeyBoardNavigation::class$ = nullptr;