#include <bug6698013.h>
#include <VirtualFile.h>
#include <VirtualFileSystemView.h>
#include <java/awt/Component.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/JApplet.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $VirtualFile = ::VirtualFile;
using $VirtualFileSystemView = ::VirtualFileSystemView;
using $Component = ::java::awt::Component;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $JApplet = ::javax::swing::JApplet;
using $JFileChooser = ::javax::swing::JFileChooser;
using $SwingUtilities = ::javax::swing::SwingUtilities;

class bug6698013$$Lambda$lambda$main$0 : public $Runnable {
	$class(bug6698013$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug6698013::lambda$main$0();
	}
};
$Class* bug6698013$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug6698013$$Lambda$lambda$main$0, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6698013$$Lambda$lambda$main$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"bug6698013$$Lambda$lambda$main$0",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(bug6698013$$Lambda$lambda$main$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6698013$$Lambda$lambda$main$0);
	});
	return class$;
}
$Class* bug6698013$$Lambda$lambda$main$0::class$ = nullptr;

$VirtualFile* bug6698013::root = nullptr;
$VirtualFile* bug6698013::rootFile = nullptr;
$VirtualFile* bug6698013::subdir = nullptr;
$VirtualFile* bug6698013::subdirFile = nullptr;

void bug6698013::init$() {
	$JApplet::init$();
}

void bug6698013::main($StringArray* args) {
	$init(bug6698013);
	$SwingUtilities::invokeAndWait($$new(bug6698013$$Lambda$lambda$main$0));
}

void bug6698013::init() {
	$useLocalObjectStack();
	$var($JFileChooser, chooser, $new($JFileChooser, $$new($VirtualFileSystemView)));
	chooser->setCurrentDirectory(bug6698013::root);
	chooser->showOpenDialog(nullptr);
}

void bug6698013::lambda$main$0() {
	$init(bug6698013);
	$$new(bug6698013)->init();
}

void bug6698013::clinit$($Class* clazz) {
	$assignStatic(bug6698013::root, $new($VirtualFile, "testdir"_s, true));
	$assignStatic(bug6698013::rootFile, $new($VirtualFile, "testdir/test.txt"_s, false));
	$assignStatic(bug6698013::subdir, $new($VirtualFile, "testdir/subdir"_s, true));
	$assignStatic(bug6698013::subdirFile, $new($VirtualFile, "testdir/subdir/subtest.txt"_s, false));
}

bug6698013::bug6698013() {
}

$Class* bug6698013::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("bug6698013$$Lambda$lambda$main$0")) {
			return bug6698013$$Lambda$lambda$main$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"root", "LVirtualFile;", nullptr, $STATIC | $FINAL, $staticField(bug6698013, root)},
		{"rootFile", "LVirtualFile;", nullptr, $STATIC | $FINAL, $staticField(bug6698013, rootFile)},
		{"subdir", "LVirtualFile;", nullptr, $STATIC | $FINAL, $staticField(bug6698013, subdir)},
		{"subdirFile", "LVirtualFile;", nullptr, $STATIC | $FINAL, $staticField(bug6698013, subdirFile)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug6698013, init$, void)},
		{"init", "()V", nullptr, $PUBLIC, $virtualMethod(bug6698013, init, void)},
		{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(bug6698013, lambda$main$0, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug6698013, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug6698013",
		"javax.swing.JApplet",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(bug6698013, name, initialize, &classInfo$$, bug6698013::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(bug6698013));
	});
	return class$;
}

$Class* bug6698013::class$ = nullptr;