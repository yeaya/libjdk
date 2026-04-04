#include <bug8031971.h>
#include <bug8031971$TestTable.h>
#include <java/io/Serializable.h>
#include <java/lang/Number.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Date.h>
#include <java/util/Hashtable.h>
#include <javax/swing/Icon.h>
#include <javax/swing/ImageIcon.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef EDITORS
#undef RENDERERS

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $bug8031971$TestTable = ::bug8031971$TestTable;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Date = ::java::util::Date;
using $Hashtable = ::java::util::Hashtable;
using $Icon = ::javax::swing::Icon;
using $ImageIcon = ::javax::swing::ImageIcon;
using $SwingUtilities = ::javax::swing::SwingUtilities;

class bug8031971$$Lambda$lambda$main$0 : public $Runnable {
	$class(bug8031971$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug8031971::lambda$main$0();
	}
};
$Class* bug8031971$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug8031971$$Lambda$lambda$main$0, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug8031971$$Lambda$lambda$main$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"bug8031971$$Lambda$lambda$main$0",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(bug8031971$$Lambda$lambda$main$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug8031971$$Lambda$lambda$main$0);
	});
	return class$;
}
$Class* bug8031971$$Lambda$lambda$main$0::class$ = nullptr;

$ObjectArray2* bug8031971::RENDERERS = nullptr;
$ObjectArray2* bug8031971::EDITORS = nullptr;

void bug8031971::init$() {
}

void bug8031971::main($StringArray* args) {
	$init(bug8031971);
	$SwingUtilities::invokeAndWait($$new(bug8031971$$Lambda$lambda$main$0));
}

void bug8031971::test($Hashtable* table, $ObjectArray2* values) {
	$init(bug8031971);
	$useLocalObjectStack();
	for (int32_t i = 0; i < $nc(values)->length; ++i) {
		test($($nc(table)->get($nc(values->get(i))->get(0))), $cast($String, $nc(values->get(i))->get(1)));
	}
}

void bug8031971::test(Object$* obj, $String* className) {
	$init(bug8031971);
	$useLocalObjectStack();
	if (!$$nc($nc($of(obj))->getClass()->getCanonicalName())->equals($($nc(className)->replace(u'$', u'.')))) {
		$throwNew($RuntimeException, "Wrong value!"_s);
	}
}

void bug8031971::lambda$main$0() {
	$init(bug8031971);
	$useLocalObjectStack();
	$var($bug8031971$TestTable, table, $new($bug8031971$TestTable));
	test($(table->getDefaultRenderersByColumnClass()), bug8031971::RENDERERS);
	test($(table->getDefaultEditorsByColumnClass()), bug8031971::EDITORS);
}

void bug8031971::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$load($Date);
	$load($Icon);
	$load($ImageIcon);
	$assignStatic(bug8031971::RENDERERS, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$Object::class$,
			"javax.swing.table.DefaultTableCellRenderer$UIResource"_s
		}),
		$$new($ObjectArray, {
			$Number::class$,
			"javax.swing.JTable$NumberRenderer"_s
		}),
		$$new($ObjectArray, {
			$Float::class$,
			"javax.swing.JTable$DoubleRenderer"_s
		}),
		$$new($ObjectArray, {
			$Double::class$,
			"javax.swing.JTable$DoubleRenderer"_s
		}),
		$$new($ObjectArray, {
			$Date::class$,
			"javax.swing.JTable$DateRenderer"_s
		}),
		$$new($ObjectArray, {
			$Icon::class$,
			"javax.swing.JTable$IconRenderer"_s
		}),
		$$new($ObjectArray, {
			$ImageIcon::class$,
			"javax.swing.JTable$IconRenderer"_s
		}),
		$$new($ObjectArray, {
			$Boolean::class$,
			"javax.swing.JTable$BooleanRenderer"_s
		})
	}));
	$assignStatic(bug8031971::EDITORS, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$Object::class$,
			"javax.swing.JTable$GenericEditor"_s
		}),
		$$new($ObjectArray, {
			$Number::class$,
			"javax.swing.JTable$NumberEditor"_s
		}),
		$$new($ObjectArray, {
			$Boolean::class$,
			"javax.swing.JTable$BooleanEditor"_s
		})
	}));
}

bug8031971::bug8031971() {
}

$Class* bug8031971::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("bug8031971$$Lambda$lambda$main$0")) {
			return bug8031971$$Lambda$lambda$main$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"RENDERERS", "[[Ljava/lang/Object;", nullptr, $STATIC, $staticField(bug8031971, RENDERERS)},
		{"EDITORS", "[[Ljava/lang/Object;", nullptr, $STATIC, $staticField(bug8031971, EDITORS)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug8031971, init$, void)},
		{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(bug8031971, lambda$main$0, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug8031971, main, void, $StringArray*), "java.lang.Exception"},
		{"test", "(Ljava/util/Hashtable;[[Ljava/lang/Object;)V", nullptr, $STATIC, $staticMethod(bug8031971, test, void, $Hashtable*, $ObjectArray2*)},
		{"test", "(Ljava/lang/Object;Ljava/lang/String;)V", nullptr, $STATIC, $staticMethod(bug8031971, test, void, Object$*, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug8031971$TestTable", "bug8031971", "TestTable", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug8031971",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug8031971$TestTable"
	};
	$loadClass(bug8031971, name, initialize, &classInfo$$, bug8031971::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(bug8031971);
	});
	return class$;
}

$Class* bug8031971::class$ = nullptr;