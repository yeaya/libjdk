#include <bug4726194.h>
#include <java/awt/Component.h>
#include <java/awt/Font.h>
#include <java/io/Serializable.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InstantiationException.h>
#include <java/lang/Math.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/ArrayList.h>
#include <java/util/Arrays.h>
#include <java/util/List.h>
#include <javax/swing/BorderFactory.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/Spring.h>
#include <javax/swing/SpringLayout$Constraints.h>
#include <javax/swing/SpringLayout.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <javax/swing/border/Border.h>
#include <jcpp.h>

#undef BASELINE
#undef EAST
#undef FAIL
#undef HEIGHT
#undef HORIZONTAL_CENTER
#undef NORTH
#undef PLAIN
#undef SOUTH
#undef TEST_DUPLICATES
#undef VERTICAL_CENTER
#undef WEST
#undef WIDTH

using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $Font = ::java::awt::Font;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InstantiationException = ::java::lang::InstantiationException;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $ArrayList = ::java::util::ArrayList;
using $Arrays = ::java::util::Arrays;
using $List = ::java::util::List;
using $BorderFactory = ::javax::swing::BorderFactory;
using $JTextField = ::javax::swing::JTextField;
using $Spring = ::javax::swing::Spring;
using $SpringLayout = ::javax::swing::SpringLayout;
using $SpringLayout$Constraints = ::javax::swing::SpringLayout$Constraints;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;

class bug4726194$$Lambda$lambda$main$0 : public $Runnable {
	$class(bug4726194$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$($UIManager$LookAndFeelInfo* laf) {
		$set(this, laf, laf);
	}
	virtual void run() override {
		bug4726194::lambda$main$0(laf);
	}
	$UIManager$LookAndFeelInfo* laf = nullptr;
};
$Class* bug4726194$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"laf", "Ljavax/swing/UIManager$LookAndFeelInfo;", nullptr, $PUBLIC, $field(bug4726194$$Lambda$lambda$main$0, laf)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PUBLIC, $method(bug4726194$$Lambda$lambda$main$0, init$, void, $UIManager$LookAndFeelInfo*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug4726194$$Lambda$lambda$main$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"bug4726194$$Lambda$lambda$main$0",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(bug4726194$$Lambda$lambda$main$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4726194$$Lambda$lambda$main$0);
	});
	return class$;
}
$Class* bug4726194$$Lambda$lambda$main$0::class$ = nullptr;

class bug4726194$$Lambda$lambda$main$1$1 : public $Runnable {
	$class(bug4726194$$Lambda$lambda$main$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug4726194::lambda$main$1();
	}
};
$Class* bug4726194$$Lambda$lambda$main$1$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug4726194$$Lambda$lambda$main$1$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug4726194$$Lambda$lambda$main$1$1, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"bug4726194$$Lambda$lambda$main$1$1",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(bug4726194$$Lambda$lambda$main$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4726194$$Lambda$lambda$main$1$1);
	});
	return class$;
}
$Class* bug4726194$$Lambda$lambda$main$1$1::class$ = nullptr;

$StringArray* bug4726194::hConstraints = nullptr;
$StringArray* bug4726194::vConstraints = nullptr;
$ints* bug4726194::FAIL = nullptr;
bool bug4726194::TEST_DUPLICATES = false;

void bug4726194::init$() {
}

void bug4726194::main($StringArray* args) {
	$init(bug4726194);
	$useLocalObjectStack();
	$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
	for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
		$var($UIManager$LookAndFeelInfo, laf, arr$->get(i$));
		{
			$SwingUtilities::invokeAndWait($$new(bug4726194$$Lambda$lambda$main$0, laf));
			$SwingUtilities::invokeAndWait($$new(bug4726194$$Lambda$lambda$main$1$1));
		}
	}
}

void bug4726194::setLookAndFeel($UIManager$LookAndFeelInfo* laf) {
	$init(bug4726194);
	$useLocalObjectStack();
	try {
		$nc($System::out)->println($$str({"LookAndFeel: "_s, $($nc(laf)->getClassName())}));
		$UIManager::setLookAndFeel($(laf->getClassName()));
	} catch ($UnsupportedLookAndFeelException& ignored) {
		$nc($System::out)->println($$str({"Unsupported LookAndFeel: "_s, $($nc(laf)->getClassName())}));
	} catch ($ClassNotFoundException& e) {
		$throwNew($RuntimeException, e);
	} catch ($InstantiationException& e) {
		$throwNew($RuntimeException, e);
	} catch ($IllegalAccessException& e) {
		$throwNew($RuntimeException, e);
	}
}

void bug4726194::test(int32_t level, bool horizontal) {
	$init(bug4726194);
	$useLocalObjectStack();
	$var($List, result, $new($ArrayList));
	$var($StringArray, constraints, horizontal ? bug4726194::hConstraints : bug4726194::vConstraints);
	test(level, constraints, result, $($Arrays::asList($$new($ObjectArray, level))));
	$var($JTextField, tf, $new($JTextField, ""_s));
	tf->setBorder($($BorderFactory::createEmptyBorder()));
	tf->setFont($$new($Font, "Dialog"_s, $Font::PLAIN, 6));
	$nc($System::out)->print("\t\t"_s);
	for (int32_t j = 0; j < $nc(constraints)->length; ++j) {
		$var($String, constraint, constraints->get(j));
		$System::out->print($$str({constraint, $("                "_s->substring($nc(constraint)->length()))}));
	}
	$System::out->println(""_s);
	for (int32_t i = 0; i < result->size(); ++i) {
		$var($SpringLayout$Constraints, c, $new($SpringLayout$Constraints, tf));
		$var($List, cc, $cast($List, result->get(i)));
		for (int32_t j = 0; j < $nc(cc)->size(); ++j) {
			$var($String, constraint, $cast($String, cc->get(j)));
			c->setConstraint(constraint, $($Spring::constant((j + 1) * 10)));
		}
		$System::out->print(" Input:\t\t"_s);
		for (int32_t j = 0; j < constraints->length; ++j) {
			$var($String, constraint, constraints->get(j));
			int32_t jj = cc->indexOf(constraint);
			$var($String, val, cc->contains(constraint) ? $Integer::toString((jj + 1) * 10) : "?"_s);
			$System::out->print($$str({val, "\t\t"_s}));
		}
		$System::out->println(""_s);
		$System::out->print("Output:\t\t"_s);
		for (int32_t j = 0; j < constraints->length; ++j) {
			$var($String, constraint, constraints->get(j));
			$var($Spring, spring, c->getConstraint(constraint));
			$var($String, springVal, (spring == nullptr) ? "?"_s : $Integer::toString(spring->getValue()));
			$System::out->print(springVal);
			$System::out->print("\t\t"_s);
		}
		for (int32_t j = 0; j < cc->size(); ++j) {
			$var($String, constraint, $cast($String, cc->get(j)));
			$var($Spring, con, c->getConstraint(constraint));
			if (con == nullptr || con->getValue() != (j + 1) * 10) {
				$throwNew($RuntimeException, "Values are wrong!!! "_s);
			}
		}
		if (horizontal) {
			$init($SpringLayout);
			$var($ints, a1, getValues(c, $$new($StringArray, {
				$SpringLayout::WEST,
				$SpringLayout::WIDTH,
				$SpringLayout::EAST
			})));
			if ($nc(a1)->get(0) + $nc(a1)->get(1) != $nc(a1)->get(2)) {
				$throwNew($RuntimeException, "WEST + WIDTH != EAST!!! "_s);
			}
			$var($ints, a2, getValues(c, $$new($StringArray, {
				$SpringLayout::WEST,
				$SpringLayout::WIDTH,
				$SpringLayout::HORIZONTAL_CENTER
			})));
			if ($nc(a2)->get(0) + $nc(a2)->get(1) / 2 != $nc(a2)->get(2)) {
				$throwNew($RuntimeException, "WEST + WIDTH/2 != HORIZONTAL_CENTER!!! "_s);
			}
		} else {
			$init($SpringLayout);
			$var($ints, a3, getValues(c, $$new($StringArray, {
				$SpringLayout::NORTH,
				$SpringLayout::HEIGHT,
				$SpringLayout::SOUTH
			})));
			if ($nc(a3)->get(0) + $nc(a3)->get(1) != $nc(a3)->get(2)) {
				$throwNew($RuntimeException, "NORTH + HEIGHT != SOUTH!!! "_s);
			}
			$var($ints, a4, getValues(c, $$new($StringArray, {
				$SpringLayout::NORTH,
				$SpringLayout::HEIGHT,
				$SpringLayout::VERTICAL_CENTER
			})));
			int32_t vcDiff = $Math::abs($nc(a4)->get(0) + $nc(a4)->get(1) / 2 - $nc(a4)->get(2));
			if (vcDiff > 1) {
				$throwNew($RuntimeException, "NORTH + HEIGHT/2 != VERTICAL_CENTER!!! "_s);
			}
			$var($ints, a5, getValues(c, $$new($StringArray, {
				$SpringLayout::NORTH,
				$SpringLayout::BASELINE,
				$SpringLayout::SOUTH
			})));
			if ($nc(a5)->get(0) > $nc(a5)->get(1) != $nc(a5)->get(1) > $nc(a5)->get(2)) {
				$throwNew($RuntimeException, "BASELINE is not in the range: [NORTH, SOUTH]!!!"_s);
			}
		}
		$System::out->println(""_s);
	}
	$System::out->println(""_s);
}

$ints* bug4726194::getValues($SpringLayout$Constraints* con, $StringArray* cNames) {
	$init(bug4726194);
	$useLocalObjectStack();
	$var($ints, result, $new($ints, $nc(cNames)->length));
	for (int32_t i = 0; i < cNames->length; ++i) {
		$var($String, name, cNames->get(i));
		$var($Spring, s, $nc(con)->getConstraint(name));
		if (s == nullptr) {
			$nc($System::out)->print($$str({"Warning: "_s, name, " is undefined. "_s}));
			return bug4726194::FAIL;
		}
		result->set(i, $nc(s)->getValue());
	}
	return result;
}

void bug4726194::test(int32_t level, $StringArray* constraints, $List* result, $List* soFar) {
	$init(bug4726194);
	$useLocalObjectStack();
	if (level == 0) {
		$nc(result)->add(soFar);
		return;
	}
	for (int32_t i = 0; i < $nc(constraints)->length; ++i) {
		if ($nc(soFar)->contains(constraints->get(i)) && !bug4726194::TEST_DUPLICATES) {
			continue;
		}
		$var($List, child, $new($ArrayList, soFar));
		child->set(level - 1, constraints->get(i));
		test(level - 1, constraints, result, child);
	}
}

void bug4726194::lambda$main$1() {
	$init(bug4726194);
	int32_t minLevel = 2;
	int32_t maxLevel = 2;
	for (int32_t i = minLevel; i <= maxLevel; ++i) {
		test(i, true);
		test(i, false);
	}
}

void bug4726194::lambda$main$0($UIManager$LookAndFeelInfo* laf) {
	$init(bug4726194);
	setLookAndFeel(laf);
}

void bug4726194::clinit$($Class* clazz) {
	$init($SpringLayout);
	$assignStatic(bug4726194::hConstraints, $new($StringArray, {
		$SpringLayout::WEST,
		"Width"_s,
		$SpringLayout::EAST,
		$SpringLayout::HORIZONTAL_CENTER
	}));
	$assignStatic(bug4726194::vConstraints, $new($StringArray, {
		$SpringLayout::NORTH,
		"Height"_s,
		$SpringLayout::SOUTH,
		$SpringLayout::VERTICAL_CENTER,
		$SpringLayout::BASELINE
	}));
	$assignStatic(bug4726194::FAIL, $new($ints, 3));
	bug4726194::TEST_DUPLICATES = false;
}

bug4726194::bug4726194() {
}

$Class* bug4726194::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("bug4726194$$Lambda$lambda$main$0")) {
			return bug4726194$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals("bug4726194$$Lambda$lambda$main$1$1")) {
			return bug4726194$$Lambda$lambda$main$1$1::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"hConstraints", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(bug4726194, hConstraints)},
		{"vConstraints", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(bug4726194, vConstraints)},
		{"FAIL", "[I", nullptr, $PRIVATE | $STATIC, $staticField(bug4726194, FAIL)},
		{"TEST_DUPLICATES", "Z", nullptr, $PRIVATE | $STATIC, $staticField(bug4726194, TEST_DUPLICATES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug4726194, init$, void)},
		{"getValues", "(Ljavax/swing/SpringLayout$Constraints;[Ljava/lang/String;)[I", nullptr, $PRIVATE | $STATIC, $staticMethod(bug4726194, getValues, $ints*, $SpringLayout$Constraints*, $StringArray*)},
		{"lambda$main$0", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(bug4726194, lambda$main$0, void, $UIManager$LookAndFeelInfo*)},
		{"lambda$main$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(bug4726194, lambda$main$1, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug4726194, main, void, $StringArray*), "java.lang.Exception"},
		{"setLookAndFeel", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(bug4726194, setLookAndFeel, void, $UIManager$LookAndFeelInfo*)},
		{"test", "(IZ)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug4726194, test, void, int32_t, bool)},
		{"test", "(I[Ljava/lang/String;Ljava/util/List;Ljava/util/List;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug4726194, test, void, int32_t, $StringArray*, $List*, $List*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug4726194",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(bug4726194, name, initialize, &classInfo$$, bug4726194::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(bug4726194);
	});
	return class$;
}

$Class* bug4726194::class$ = nullptr;