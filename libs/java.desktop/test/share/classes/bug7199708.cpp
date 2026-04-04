#include <bug7199708.h>
#include <bug7199708$1.h>
#include <bug7199708$2.h>
#include <bug7199708$ComponentAction.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Robot.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/attribute/FileAttribute.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

#undef BUTTON1_MASK
#undef FILE_NUMBER
#undef VK_ESCAPE

using $ComponentArray = $Array<::java::awt::Component>;
using $FileArray = $Array<::java::io::File>;
using $FileAttributeArray = $Array<::java::nio::file::attribute::FileAttribute>;
using $bug7199708$1 = ::bug7199708$1;
using $bug7199708$2 = ::bug7199708$2;
using $bug7199708$ComponentAction = ::bug7199708$ComponentAction;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Robot = ::java::awt::Robot;
using $InputEvent = ::java::awt::event::InputEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Files = ::java::nio::file::Files;
using $JFileChooser = ::javax::swing::JFileChooser;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;

int32_t bug7199708::FILE_NUMBER = 0;
$volatile($JFileChooser*) bug7199708::fileChooser = nullptr;
$volatile(int32_t) bug7199708::locationX = 0;
$volatile(int32_t) bug7199708::locationY = 0;
$volatile(int32_t) bug7199708::width = 0;
$File* bug7199708::largeFolder = nullptr;
$FileArray* bug7199708::files = nullptr;

void bug7199708::init$() {
}

void bug7199708::main($StringArray* args) {
	$init(bug7199708);
	$useLocalObjectStack();
	$var($Robot, robot, $new($Robot));
	robot->setAutoDelay(50);
	$var($Throwable, var$0, nullptr);
	try {
		$var($File, folder, createLargeFolder());
		$UIManager::setLookAndFeel("javax.swing.plaf.metal.MetalLookAndFeel"_s);
		$SwingUtilities::invokeLater($$new($bug7199708$1, folder));
		robot->waitForIdle();
		$SwingUtilities::invokeLater($$new($bug7199708$2));
		robot->waitForIdle();
		int32_t d = 25;
		for (int32_t i = 0; i < $div(bug7199708::width, d); ++i) {
			robot->mouseMove(bug7199708::locationX + i * d, bug7199708::locationY + 5);
			robot->waitForIdle();
			robot->mousePress($InputEvent::BUTTON1_MASK);
			robot->waitForIdle();
			robot->mouseRelease($InputEvent::BUTTON1_MASK);
			robot->waitForIdle();
		}
		robot->keyPress($KeyEvent::VK_ESCAPE);
		robot->waitForIdle();
		robot->keyRelease($KeyEvent::VK_ESCAPE);
		robot->waitForIdle();
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		for (int32_t i = 0; i < bug7199708::FILE_NUMBER; ++i) {
			$Files::delete$($($nc($nc(bug7199708::files)->get(i))->toPath()));
		}
		$Files::delete$($($nc(bug7199708::largeFolder)->toPath()));
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void bug7199708::doAction($Component* component, $bug7199708$ComponentAction* action) {
	$init(bug7199708);
	$useLocalObjectStack();
	if ($nc(action)->accept(component)) {
		action->perform(component);
	} else if ($instanceOf($Container, component)) {
		$var($ComponentArray, arr$, $cast($Container, component)->getComponents());
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($Component, comp, arr$->get(i$));
			{
				doAction(comp, action);
			}
		}
	}
}

$File* bug7199708::createLargeFolder() {
	$init(bug7199708);
	$useLocalObjectStack();
	try {
		$assignStatic(bug7199708::largeFolder, $$nc($Files::createTempDirectory("large_folder"_s, $$new($FileAttributeArray, 0)))->toFile());
		for (int32_t i = 0; i < bug7199708::FILE_NUMBER; ++i) {
			$nc(bug7199708::files)->set(i, $$new($File, bug7199708::largeFolder, $$str({"File_"_s, $$str(i), ".txt"_s})));
			$nc(bug7199708::files->get(i))->createNewFile();
		}
		return bug7199708::largeFolder;
	} catch ($IOException& ex) {
		$throwNew($RuntimeException, ex);
	}
	$shouldNotReachHere();
}

void bug7199708::clinit$($Class* clazz) {
	bug7199708::FILE_NUMBER = 30000;
	$assignStatic(bug7199708::files, $new($FileArray, bug7199708::FILE_NUMBER));
}

bug7199708::bug7199708() {
}

$Class* bug7199708::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"FILE_NUMBER", "I", nullptr, $PRIVATE | $STATIC, $staticField(bug7199708, FILE_NUMBER)},
		{"fileChooser", "Ljavax/swing/JFileChooser;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(bug7199708, fileChooser)},
		{"locationX", "I", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(bug7199708, locationX)},
		{"locationY", "I", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(bug7199708, locationY)},
		{"width", "I", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(bug7199708, width)},
		{"largeFolder", "Ljava/io/File;", nullptr, $PRIVATE | $STATIC, $staticField(bug7199708, largeFolder)},
		{"files", "[Ljava/io/File;", nullptr, $PRIVATE | $STATIC, $staticField(bug7199708, files)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug7199708, init$, void)},
		{"createLargeFolder", "()Ljava/io/File;", nullptr, $PRIVATE | $STATIC, $staticMethod(bug7199708, createLargeFolder, $File*)},
		{"doAction", "(Ljava/awt/Component;Lbug7199708$ComponentAction;)V", nullptr, $STATIC, $staticMethod(bug7199708, doAction, void, $Component*, $bug7199708$ComponentAction*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug7199708, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug7199708$ComponentAction", "bug7199708", "ComponentAction", $STATIC | $INTERFACE | $ABSTRACT},
		{"bug7199708$2", nullptr, nullptr, 0},
		{"bug7199708$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug7199708",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug7199708$ComponentAction,bug7199708$2,bug7199708$2$2,bug7199708$2$1,bug7199708$1"
	};
	$loadClass(bug7199708, name, initialize, &classInfo$$, bug7199708::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(bug7199708);
	});
	return class$;
}

$Class* bug7199708::class$ = nullptr;