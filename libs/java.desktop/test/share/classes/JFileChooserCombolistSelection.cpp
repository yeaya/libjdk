#include <JFileChooserCombolistSelection.h>
#include <JFileChooserCombolistSelection$1.h>
#include <Sysout4JFileChooserCombolistSelection.h>
#include <java/lang/CharSequence.h>
#include <java/lang/InterruptedException.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

using $JFileChooserCombolistSelection$1 = ::JFileChooserCombolistSelection$1;
using $Sysout4JFileChooserCombolistSelection = ::Sysout4JFileChooserCombolistSelection;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JFileChooser = ::javax::swing::JFileChooser;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;

bool JFileChooserCombolistSelection::theTestPassed = false;
bool JFileChooserCombolistSelection::testGeneratedInterrupt = false;
$Thread* JFileChooserCombolistSelection::mainThread = nullptr;
int32_t JFileChooserCombolistSelection::sleepTime = 0;
$JFileChooser* JFileChooserCombolistSelection::fileChooser = nullptr;

void JFileChooserCombolistSelection::init$() {
}

void JFileChooserCombolistSelection::init() {
	$init(JFileChooserCombolistSelection);
	$SwingUtilities::invokeAndWait($$new($JFileChooserCombolistSelection$1));
}

void JFileChooserCombolistSelection::main($StringArray* args) {
	$init(JFileChooserCombolistSelection);
	$useLocalObjectStack();
	$var($String, osName, $System::getProperty("os.name"_s));
	if (!$($nc(osName)->toLowerCase())->contains("win"_s)) {
		$nc($System::out)->println("The test was skipped because it is sensible only for Windows."_s);
		return;
	}
	try {
		$UIManager::setLookAndFeel("com.sun.java.swing.plaf.windows.WindowsLookAndFeel"_s);
	} catch ($Exception& ex) {
		return;
	}
	$assignStatic(JFileChooserCombolistSelection::mainThread, $Thread::currentThread());
	try {
		init();
	} catch ($Exception& ex) {
		return;
	}
	try {
		$nc(JFileChooserCombolistSelection::mainThread)->sleep(JFileChooserCombolistSelection::sleepTime);
	} catch ($InterruptedException& ex) {
		$Sysout4JFileChooserCombolistSelection::dispose();
		if (!JFileChooserCombolistSelection::theTestPassed && JFileChooserCombolistSelection::testGeneratedInterrupt) {
			$throwNew($RuntimeException, "Test Failed"_s);
		}
	}
	if (!JFileChooserCombolistSelection::testGeneratedInterrupt) {
		$Sysout4JFileChooserCombolistSelection::dispose();
		$throwNew($RuntimeException, "Test Failed"_s);
	}
}

void JFileChooserCombolistSelection::pass() {
	$init(JFileChooserCombolistSelection);
	$synchronized(class$) {
		JFileChooserCombolistSelection::theTestPassed = true;
		JFileChooserCombolistSelection::testGeneratedInterrupt = true;
		$nc(JFileChooserCombolistSelection::mainThread)->interrupt();
	}
}

void JFileChooserCombolistSelection::fail() {
	$init(JFileChooserCombolistSelection);
	$synchronized(class$) {
		JFileChooserCombolistSelection::theTestPassed = false;
		JFileChooserCombolistSelection::testGeneratedInterrupt = true;
		$nc(JFileChooserCombolistSelection::mainThread)->interrupt();
	}
}

void JFileChooserCombolistSelection::clinit$($Class* clazz) {
	JFileChooserCombolistSelection::sleepTime = 90000;
}

JFileChooserCombolistSelection::JFileChooserCombolistSelection() {
}

$Class* JFileChooserCombolistSelection::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"theTestPassed", "Z", nullptr, $PRIVATE | $STATIC, $staticField(JFileChooserCombolistSelection, theTestPassed)},
		{"testGeneratedInterrupt", "Z", nullptr, $PRIVATE | $STATIC, $staticField(JFileChooserCombolistSelection, testGeneratedInterrupt)},
		{"mainThread", "Ljava/lang/Thread;", nullptr, $PRIVATE | $STATIC, $staticField(JFileChooserCombolistSelection, mainThread)},
		{"sleepTime", "I", nullptr, $PRIVATE | $STATIC, $staticField(JFileChooserCombolistSelection, sleepTime)},
		{"fileChooser", "Ljavax/swing/JFileChooser;", nullptr, $PUBLIC | $STATIC, $staticField(JFileChooserCombolistSelection, fileChooser)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JFileChooserCombolistSelection, init$, void)},
		{"fail", "()V", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $staticMethod(JFileChooserCombolistSelection, fail, void)},
		{"init", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(JFileChooserCombolistSelection, init, void), "java.lang.Exception"},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(JFileChooserCombolistSelection, main, void, $StringArray*), "java.lang.Exception"},
		{"pass", "()V", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $staticMethod(JFileChooserCombolistSelection, pass, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"JFileChooserCombolistSelection$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"JFileChooserCombolistSelection",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"JFileChooserCombolistSelection$1"
	};
	$loadClass(JFileChooserCombolistSelection, name, initialize, &classInfo$$, JFileChooserCombolistSelection::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(JFileChooserCombolistSelection);
	});
	return class$;
}

$Class* JFileChooserCombolistSelection::class$ = nullptr;