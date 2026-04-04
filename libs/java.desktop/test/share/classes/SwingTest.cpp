#include <SwingTest.h>
#include <SwingTest$1.h>
#include <java/awt/Component.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InstantiationException.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/SecurityException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/InvocationTargetException.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Modifier.h>
#include <java/util/AbstractSet.h>
#include <java/util/Iterator.h>
#include <java/util/Set.h>
#include <java/util/TreeSet.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef HEIGHT
#undef TYPE
#undef WIDTH

using $SwingTest$1 = ::SwingTest$1;
using $MethodArray = $Array<::java::lang::reflect::Method>;
using $Component = ::java::awt::Component;
using $Robot = ::java::awt::Robot;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InstantiationException = ::java::lang::InstantiationException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $SecurityException = ::java::lang::SecurityException;
using $Void = ::java::lang::Void;
using $InvocationTargetException = ::java::lang::reflect::InvocationTargetException;
using $Method = ::java::lang::reflect::Method;
using $Modifier = ::java::lang::reflect::Modifier;
using $AbstractSet = ::java::util::AbstractSet;
using $Set = ::java::util::Set;
using $TreeSet = ::java::util::TreeSet;
using $JFrame = ::javax::swing::JFrame;
using $SwingUtilities = ::javax::swing::SwingUtilities;

void SwingTest::start($Class* type) {
	$init(SwingTest);
	$$new(SwingTest, type)->start();
}

void SwingTest::init$($Class* type) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($Set, methods, $cast($AbstractSet, $new($TreeSet, $$new($SwingTest$1, this))));
	{
		$var($MethodArray, arr$, $nc(type)->getMethods());
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($Method, method, arr$->get(i$));
			if ($nc($nc(method)->getDeclaringClass())->equals(type)) {
				if ($nc(method->getReturnType())->equals($Void::TYPE)) {
					if (0 == $nc($(method->getParameterTypes()))->length) {
						methods->add(method);
					}
				}
			}
		}
	}
	$set(this, type, type);
	$set(this, methods, methods->iterator());
}

void SwingTest::run() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	try {
		if (this->object == nullptr) {
			$nc($System::out)->println(this->type);
			$set(this, frame, $new($JFrame, $(this->type->getSimpleName())));
			this->frame->setSize(SwingTest::WIDTH, SwingTest::HEIGHT);
			$nc(this->frame)->setLocationRelativeTo(nullptr);
			$set(this, object, $$nc(this->type->getConstructor($$new($ClassArray, {$nc($of(this->frame))->getClass()})))->newInstance($$new($ObjectArray, {this->frame})));
			this->frame->setVisible(true);
		} else if (this->method != nullptr) {
			$nc($System::out)->println(this->method);
			this->method->invoke(this->object, $$new($ObjectArray, 0));
		} else {
			$nc($System::out)->println((this->error == nullptr) ? "PASSED"_s : "FAILED"_s);
			$nc(this->frame)->dispose();
			$set(this, frame, nullptr);
		}
	} catch ($NoSuchMethodException& exception) {
		$set(this, error, exception);
	} catch ($SecurityException& exception) {
		$set(this, error, exception);
	} catch ($IllegalAccessException& exception) {
		$set(this, error, exception);
	} catch ($IllegalArgumentException& exception) {
		$set(this, error, exception);
	} catch ($InstantiationException& exception) {
		$set(this, error, exception);
	} catch ($InvocationTargetException& exception) {
		$set(this, error, exception->getTargetException());
	}
	$nc($System::out)->flush();
	$set(this, method, $nc(this->methods)->hasNext() && (this->error == nullptr) ? $cast($Method, this->methods->next()) : ($Method*)nullptr);
}

void SwingTest::start() {
	$useLocalObjectStack();
	do {
		if ((this->method != nullptr) && $Modifier::isStatic(this->method->getModifiers())) {
			run();
		} else {
			$SwingUtilities::invokeLater(this);
		}
		$var($Robot, robot, $new($Robot));
		robot->waitForIdle();
	} while (this->frame != nullptr);
	if (this->error != nullptr) {
		$throw(this->error);
	}
}

SwingTest::SwingTest() {
}

$Class* SwingTest::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"WIDTH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SwingTest, WIDTH)},
		{"HEIGHT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SwingTest, HEIGHT)},
		{"type", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE | $FINAL, $field(SwingTest, type)},
		{"methods", "Ljava/util/Iterator;", "Ljava/util/Iterator<Ljava/lang/reflect/Method;>;", $PRIVATE | $FINAL, $field(SwingTest, methods)},
		{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE, $field(SwingTest, frame)},
		{"object", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(SwingTest, object)},
		{"method", "Ljava/lang/reflect/Method;", nullptr, $PRIVATE, $field(SwingTest, method)},
		{"error", "Ljava/lang/Throwable;", nullptr, $PRIVATE, $field(SwingTest, error)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", $PRIVATE, $method(SwingTest, init$, void, $Class*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(SwingTest, run, void)},
		{"start", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", $PUBLIC | $STATIC, $staticMethod(SwingTest, start, void, $Class*), "java.lang.Throwable"},
		{"start", "()V", nullptr, $PRIVATE, $method(SwingTest, start, void), "java.lang.Throwable"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"SwingTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"SwingTest",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"SwingTest$1"
	};
	$loadClass(SwingTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SwingTest);
	});
	return class$;
}

$Class* SwingTest::class$ = nullptr;