#include <bug8059739.h>
#include <bug8059739$1.h>
#include <java/awt/datatransfer/Clipboard.h>
#include <java/awt/datatransfer/DataFlavor.h>
#include <java/io/BufferedReader.h>
#include <java/io/InputStream.h>
#include <java/io/InputStreamReader.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/TransferHandler.h>
#include <jcpp.h>

#undef COPY

using $DataFlavorArray = $Array<::java::awt::datatransfer::DataFlavor>;
using $bug8059739$1 = ::bug8059739$1;
using $Clipboard = ::java::awt::datatransfer::Clipboard;
using $DataFlavor = ::java::awt::datatransfer::DataFlavor;
using $BufferedReader = ::java::io::BufferedReader;
using $InputStream = ::java::io::InputStream;
using $InputStreamReader = ::java::io::InputStreamReader;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JTextField = ::javax::swing::JTextField;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $TransferHandler = ::javax::swing::TransferHandler;

bool bug8059739::passed = false;

void bug8059739::init$() {
}

void bug8059739::main($StringArray* args) {
	$init(bug8059739);
	$SwingUtilities::invokeAndWait($$new($bug8059739$1));
	if (!bug8059739::passed) {
		$throwNew($RuntimeException, "Test FAILED."_s);
	} else {
		$nc($System::out)->println("Passed."_s);
	}
}

void bug8059739::runTest() {
	$init(bug8059739);
	$useLocalObjectStack();
	$var($String, testString, "my string"_s);
	$var($JTextField, tf, $new($JTextField, testString));
	tf->selectAll();
	$var($Clipboard, clipboard, $new($Clipboard, "clip"_s));
	$$nc(tf->getTransferHandler())->exportToClipboard(tf, clipboard, $TransferHandler::COPY);
	$var($DataFlavorArray, dfs, clipboard->getAvailableDataFlavors());
	{
		$var($DataFlavorArray, arr$, dfs);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($DataFlavor, df, arr$->get(i$));
			{
				$var($String, charset, $nc(df)->getParameter("charset"_s));
				$load($InputStream);
				if ($InputStream::class$->isAssignableFrom(df->getRepresentationClass()) && charset != nullptr) {
					$var($BufferedReader, br, $new($BufferedReader, $$new($InputStreamReader, $$cast($InputStream, clipboard->getData(df)), charset)));
					$var($String, s, br->readLine());
					$nc($System::out)->println($$str({"Content: \'"_s, s, "\'"_s}));
					bug8059739::passed &= $nc(s)->contains(testString);
				}
			}
		}
	}
}

void bug8059739::clinit$($Class* clazz) {
	bug8059739::passed = true;
}

bug8059739::bug8059739() {
}

$Class* bug8059739::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"passed", "Z", nullptr, $PRIVATE | $STATIC, $staticField(bug8059739, passed)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug8059739, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug8059739, main, void, $StringArray*), "java.lang.Exception"},
		{"runTest", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(bug8059739, runTest, void), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug8059739$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug8059739",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug8059739$1"
	};
	$loadClass(bug8059739, name, initialize, &classInfo$$, bug8059739::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(bug8059739);
	});
	return class$;
}

$Class* bug8059739::class$ = nullptr;