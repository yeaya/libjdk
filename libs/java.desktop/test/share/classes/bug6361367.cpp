#include <bug6361367.h>
#include <bug6361367$1.h>
#include <bug6361367$2.h>
#include <java/awt/Component.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/KeyEvent.h>
#include <java/lang/Runnable.h>
#include <java/util/Arrays.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/concurrent/Callable.h>
#include <java/util/concurrent/FutureTask.h>
#include <java/util/concurrent/atomic/AtomicReference.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/JFormattedTextField.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPasswordField.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/JTextPane.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/text/Caret.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef VK_BACK_SPACE
#undef VK_END
#undef VK_SHIFT

using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $bug6361367$1 = ::bug6361367$1;
using $bug6361367$2 = ::bug6361367$2;
using $Component = ::java::awt::Component;
using $Robot = ::java::awt::Robot;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Arrays = ::java::util::Arrays;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Callable = ::java::util::concurrent::Callable;
using $FutureTask = ::java::util::concurrent::FutureTask;
using $AtomicReference = ::java::util::concurrent::atomic::AtomicReference;
using $JComponent = ::javax::swing::JComponent;
using $JEditorPane = ::javax::swing::JEditorPane;
using $JFormattedTextField = ::javax::swing::JFormattedTextField;
using $JFrame = ::javax::swing::JFrame;
using $JPasswordField = ::javax::swing::JPasswordField;
using $JTextArea = ::javax::swing::JTextArea;
using $JTextField = ::javax::swing::JTextField;
using $JTextPane = ::javax::swing::JTextPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $Caret = ::javax::swing::text::Caret;
using $JTextComponent = ::javax::swing::text::JTextComponent;

$String* bug6361367::testString = nullptr;
$String* bug6361367::resultString = nullptr;
$List* bug6361367::textClasses = nullptr;

void bug6361367::init$() {
}

void bug6361367::main($StringArray* args) {
	$init(bug6361367);
	$useLocalObjectStack();
	$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
	int32_t len$ = $nc(arr$)->length;
	int32_t i$ = 0;
	for (; i$ < len$; ++i$) {
		$var($UIManager$LookAndFeelInfo, info, arr$->get(i$));
		{
			$UIManager::setLookAndFeel($($nc(info)->getClassName()));
			$nc($System::out)->println(info);
			{
				$var($Iterator, i$, $nc(bug6361367::textClasses)->iterator());
				for (; $nc(i$)->hasNext();) {
					$Class* clazz = $cast($Class, i$->next());
					{
						bool res = test(clazz);
						if (!res) {
							$throwNew($RuntimeException, "failed"_s);
						}
					}
				}
			}
		}
	}
}

bool bug6361367::test($Class* textComponentClass) {
	$init(bug6361367);
	$useLocalObjectStack();
	$var($AtomicReference, ref, $new($AtomicReference));
	$var($JTextComponent, textComponent, $cast($JTextComponent, invokeAndWait($$new($bug6361367$1, textComponentClass, ref))));
	waitForFocus(textComponent);
	$var($Robot, robot, $new($Robot));
	robot->setAutoWaitForIdle(true);
	robot->setAutoDelay(100);
	robot->keyPress($KeyEvent::VK_END);
	robot->keyRelease($KeyEvent::VK_END);
	robot->keyPress($KeyEvent::VK_SHIFT);
	robot->keyPress($KeyEvent::VK_BACK_SPACE);
	robot->keyRelease($KeyEvent::VK_BACK_SPACE);
	robot->keyRelease($KeyEvent::VK_SHIFT);
	$var($String, str, $cast($String, invokeAndWait($$new($bug6361367$2, ref, textComponent))));
	return bug6361367::resultString->equals(str);
}

$JTextComponent* bug6361367::initialize($Class* textComponentClass, $AtomicReference* ref) {
	$init(bug6361367);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($JFrame, frame, $new($JFrame, "bug6361367"_s));
	$nc(ref)->set(frame);
	$var($JTextComponent, textComponent, $cast($JTextComponent, $nc(textComponentClass)->newInstance()));
	$nc(textComponent)->setText(bug6361367::testString);
	frame->add(textComponent);
	frame->pack();
	frame->setLocationRelativeTo(nullptr);
	frame->setVisible(true);
	textComponent->requestFocus();
	$var($Caret, caret, textComponent->getCaret());
	$nc(caret)->setDot($$nc(textComponent->getDocument())->getLength());
	return textComponent;
}

$Object* bug6361367::invokeAndWait($Callable* callable) {
	$init(bug6361367);
	$var($FutureTask, future, $new($FutureTask, callable));
	$SwingUtilities::invokeLater(future);
	return future->get();
}

void bug6361367::waitForFocus($JComponent* component) {
	$init(bug6361367);
	$synchronized(component) {
		while (!component->isFocusOwner()) {
			$of(component)->wait(100);
		}
	}
}

void bug6361367::clinit$($Class* clazz) {
	$assignStatic(bug6361367::testString, "123 456 789"_s);
	$assignStatic(bug6361367::resultString, "123 456 78"_s);
	$load($JTextArea);
	$load($JEditorPane);
	$load($JTextPane);
	$load($JTextField);
	$load($JFormattedTextField);
	$load($JPasswordField);
	$assignStatic(bug6361367::textClasses, $Arrays::asList($$new($ClassArray, {
		$JTextArea::class$,
		$JEditorPane::class$,
		$JTextPane::class$,
		$JTextField::class$,
		$JFormattedTextField::class$,
		$JPasswordField::class$
	})));
}

bug6361367::bug6361367() {
}

$Class* bug6361367::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"testString", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(bug6361367, testString)},
		{"resultString", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(bug6361367, resultString)},
		{"textClasses", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/Class<+Ljavax/swing/text/JTextComponent;>;>;", $STATIC | $FINAL, $staticField(bug6361367, textClasses)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug6361367, init$, void)},
		{"initialize", "(Ljava/lang/Class;Ljava/util/concurrent/atomic/AtomicReference;)Ljavax/swing/text/JTextComponent;", "(Ljava/lang/Class<+Ljavax/swing/text/JTextComponent;>;Ljava/util/concurrent/atomic/AtomicReference<Ljavax/swing/JFrame;>;)Ljavax/swing/text/JTextComponent;", $STATIC, $staticMethod(bug6361367, initialize, $JTextComponent*, $Class*, $AtomicReference*), "java.lang.Exception"},
		{"invokeAndWait", "(Ljava/util/concurrent/Callable;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/util/concurrent/Callable<TT;>;)TT;", $STATIC, $staticMethod(bug6361367, invokeAndWait, $Object*, $Callable*), "java.lang.Exception"},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug6361367, main, void, $StringArray*), "java.lang.Exception"},
		{"test", "(Ljava/lang/Class;)Z", "(Ljava/lang/Class<+Ljavax/swing/text/JTextComponent;>;)Z", $STATIC, $staticMethod(bug6361367, test, bool, $Class*), "java.lang.Exception"},
		{"waitForFocus", "(Ljavax/swing/JComponent;)V", nullptr, $STATIC, $staticMethod(bug6361367, waitForFocus, void, $JComponent*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6361367$2", nullptr, nullptr, 0},
		{"bug6361367$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug6361367",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug6361367$2,bug6361367$1"
	};
	$loadClass(bug6361367, name, initialize, &classInfo$$, bug6361367::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(bug6361367);
	});
	return class$;
}

$Class* bug6361367::class$ = nullptr;