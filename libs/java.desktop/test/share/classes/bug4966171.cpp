#include <bug4966171.h>
#include <java/awt/EventQueue.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InstantiationException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/concurrent/TimeUnit.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <jcpp.h>

#undef SECONDS

using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $EventQueue = ::java::awt::EventQueue;
using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InstantiationException = ::java::lang::InstantiationException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $JFileChooser = ::javax::swing::JFileChooser;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;

class bug4966171$$Lambda$lambda$main$0 : public $Runnable {
	$class(bug4966171$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$($UIManager$LookAndFeelInfo* laf) {
		$set(this, laf, laf);
	}
	virtual void run() override {
		bug4966171::lambda$main$0(laf);
	}
	$UIManager$LookAndFeelInfo* laf = nullptr;
};
$Class* bug4966171$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"laf", "Ljavax/swing/UIManager$LookAndFeelInfo;", nullptr, $PUBLIC, $field(bug4966171$$Lambda$lambda$main$0, laf)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PUBLIC, $method(bug4966171$$Lambda$lambda$main$0, init$, void, $UIManager$LookAndFeelInfo*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug4966171$$Lambda$lambda$main$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"bug4966171$$Lambda$lambda$main$0",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(bug4966171$$Lambda$lambda$main$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4966171$$Lambda$lambda$main$0);
	});
	return class$;
}
$Class* bug4966171$$Lambda$lambda$main$0::class$ = nullptr;

class bug4966171$$Lambda$test$1 : public $Runnable {
	$class(bug4966171$$Lambda$test$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug4966171::test();
	}
};
$Class* bug4966171$$Lambda$test$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug4966171$$Lambda$test$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug4966171$$Lambda$test$1, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"bug4966171$$Lambda$test$1",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(bug4966171$$Lambda$test$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4966171$$Lambda$test$1);
	});
	return class$;
}
$Class* bug4966171$$Lambda$test$1::class$ = nullptr;

void bug4966171::init$() {
}

void bug4966171::main($StringArray* args) {
	$useLocalObjectStack();
	$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
	for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
		$var($UIManager$LookAndFeelInfo, laf, arr$->get(i$));
		{
			$EventQueue::invokeAndWait($$new(bug4966171$$Lambda$lambda$main$0, laf));
			$EventQueue::invokeAndWait($$new(bug4966171$$Lambda$test$1));
		}
	}
}

void bug4966171::test() {
	$useLocalObjectStack();
	int64_t var$0 = $System::nanoTime();
	$init($TimeUnit);
	int64_t endtime = var$0 + $TimeUnit::SECONDS->toNanos(10);
	while ($System::nanoTime() < endtime) {
		try {
			$var($ByteArrayOutputStream, byteOut, $new($ByteArrayOutputStream));
			{
				$var($ObjectOutputStream, out, $new($ObjectOutputStream, byteOut));
				$var($Throwable, var$1, nullptr);
				try {
					try {
						out->writeObject($$new($JFileChooser));
					} catch ($Throwable& t$) {
						try {
							out->close();
						} catch ($Throwable& x2) {
							t$->addSuppressed(x2);
						}
						$throw(t$);
					}
				} catch ($Throwable& var$2) {
					$assign(var$1, var$2);
				} /*finally*/ {
					out->close();
				}
				if (var$1 != nullptr) {
					$throw(var$1);
				}
			}
			$var($ByteArrayInputStream, byteIn, $new($ByteArrayInputStream, $(byteOut->toByteArray())));
			{
				$var($ObjectInputStream, in, $new($ObjectInputStream, byteIn));
				$var($Throwable, var$3, nullptr);
				try {
					try {
						$var($JFileChooser, readFc, $cast($JFileChooser, in->readObject()));
					} catch ($Throwable& t$) {
						try {
							in->close();
						} catch ($Throwable& x2) {
							t$->addSuppressed(x2);
						}
						$throw(t$);
					}
				} catch ($Throwable& var$4) {
					$assign(var$3, var$4);
				} /*finally*/ {
					in->close();
				}
				if (var$3 != nullptr) {
					$throw(var$3);
				}
			}
		} catch ($Throwable& e) {
			$throwNew($RuntimeException, e);
		}
	}
}

void bug4966171::setLookAndFeel($UIManager$LookAndFeelInfo* laf) {
	$useLocalObjectStack();
	try {
		$UIManager::setLookAndFeel($($nc(laf)->getClassName()));
	} catch ($UnsupportedLookAndFeelException& ignored) {
		$nc($System::out)->println($$str({"Unsupported L&F: "_s, $($nc(laf)->getClassName())}));
	} catch ($ClassNotFoundException& e) {
		$throwNew($RuntimeException, e);
	} catch ($InstantiationException& e) {
		$throwNew($RuntimeException, e);
	} catch ($IllegalAccessException& e) {
		$throwNew($RuntimeException, e);
	}
}

void bug4966171::lambda$main$0($UIManager$LookAndFeelInfo* laf) {
	setLookAndFeel(laf);
}

bug4966171::bug4966171() {
}

$Class* bug4966171::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("bug4966171$$Lambda$lambda$main$0")) {
			return bug4966171$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals("bug4966171$$Lambda$test$1")) {
			return bug4966171$$Lambda$test$1::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug4966171, init$, void)},
		{"lambda$main$0", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(bug4966171, lambda$main$0, void, $UIManager$LookAndFeelInfo*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug4966171, main, void, $StringArray*), "java.lang.Exception"},
		{"setLookAndFeel", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(bug4966171, setLookAndFeel, void, $UIManager$LookAndFeelInfo*)},
		{"test", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(bug4966171, test, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"bug4966171",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(bug4966171, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4966171);
	});
	return class$;
}

$Class* bug4966171::class$ = nullptr;