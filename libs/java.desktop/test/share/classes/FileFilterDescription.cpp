#include <FileFilterDescription.h>
#include <FileFilterDescription$CustomFileFilter.h>
#include <java/applet/Applet.h>
#include <java/awt/Component.h>
#include <java/io/Serializable.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InstantiationException.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <jcpp.h>

using $FileFilterDescription$CustomFileFilter = ::FileFilterDescription$CustomFileFilter;
using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $Applet = ::java::applet::Applet;
using $Component = ::java::awt::Component;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InstantiationException = ::java::lang::InstantiationException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $JFileChooser = ::javax::swing::JFileChooser;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;

class FileFilterDescription$$Lambda$lambda$test$0 : public $Runnable {
	$class(FileFilterDescription$$Lambda$lambda$test$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$($UIManager$LookAndFeelInfo* info) {
		$set(this, info, info);
	}
	virtual void run() override {
		FileFilterDescription::lambda$test$0(info);
	}
	$UIManager$LookAndFeelInfo* info = nullptr;
};
$Class* FileFilterDescription$$Lambda$lambda$test$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"info", "Ljavax/swing/UIManager$LookAndFeelInfo;", nullptr, $PUBLIC, $field(FileFilterDescription$$Lambda$lambda$test$0, info)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PUBLIC, $method(FileFilterDescription$$Lambda$lambda$test$0, init$, void, $UIManager$LookAndFeelInfo*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(FileFilterDescription$$Lambda$lambda$test$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"FileFilterDescription$$Lambda$lambda$test$0",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(FileFilterDescription$$Lambda$lambda$test$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FileFilterDescription$$Lambda$lambda$test$0);
	});
	return class$;
}
$Class* FileFilterDescription$$Lambda$lambda$test$0::class$ = nullptr;

void FileFilterDescription::init$() {
	$Applet::init$();
}

void FileFilterDescription::init() {
}

void FileFilterDescription::start() {
	try {
		test();
	} catch ($Exception& e) {
		$throwNew($RuntimeException, e);
	}
}

void FileFilterDescription::test() {
	$init(FileFilterDescription);
	$useLocalObjectStack();
	$var($UIManager$LookAndFeelInfoArray, infos, $UIManager::getInstalledLookAndFeels());
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, infos);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, info, arr$->get(i$));
			{
				$SwingUtilities::invokeAndWait($$new(FileFilterDescription$$Lambda$lambda$test$0, info));
			}
		}
	}
}

void FileFilterDescription::setLookAndFeel($UIManager$LookAndFeelInfo* info) {
	$init(FileFilterDescription);
	try {
		$UIManager::setLookAndFeel($($nc(info)->getClassName()));
	} catch ($ClassNotFoundException& e) {
		$throwNew($RuntimeException, e);
	} catch ($InstantiationException& e) {
		$throwNew($RuntimeException, e);
	} catch ($UnsupportedLookAndFeelException& e) {
		$throwNew($RuntimeException, e);
	} catch ($IllegalAccessException& e) {
		$throwNew($RuntimeException, e);
	}
}

void FileFilterDescription::lambda$test$0($UIManager$LookAndFeelInfo* info) {
	$init(FileFilterDescription);
	$useLocalObjectStack();
	$var($JFileChooser, chooser, $new($JFileChooser));
	setLookAndFeel(info);
	chooser->setAcceptAllFileFilterUsed(false);
	chooser->setFileFilter($$new($FileFilterDescription$CustomFileFilter));
	$SwingUtilities::updateComponentTreeUI(chooser);
	chooser->showDialog(nullptr, "Open"_s);
}

FileFilterDescription::FileFilterDescription() {
}

$Class* FileFilterDescription::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("FileFilterDescription$$Lambda$lambda$test$0")) {
			return FileFilterDescription$$Lambda$lambda$test$0::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FileFilterDescription, init$, void)},
		{"init", "()V", nullptr, $PUBLIC, $virtualMethod(FileFilterDescription, init, void)},
		{"lambda$test$0", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(FileFilterDescription, lambda$test$0, void, $UIManager$LookAndFeelInfo*)},
		{"setLookAndFeel", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(FileFilterDescription, setLookAndFeel, void, $UIManager$LookAndFeelInfo*)},
		{"start", "()V", nullptr, $PUBLIC, $virtualMethod(FileFilterDescription, start, void)},
		{"test", "()V", nullptr, $PUBLIC | $STATIC, $staticMethod(FileFilterDescription, test, void), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"FileFilterDescription$CustomFileFilter", "FileFilterDescription", "CustomFileFilter", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"FileFilterDescription",
		"java.applet.Applet",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"FileFilterDescription$CustomFileFilter"
	};
	$loadClass(FileFilterDescription, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(FileFilterDescription));
	});
	return class$;
}

$Class* FileFilterDescription::class$ = nullptr;