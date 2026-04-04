#include <bug7199708$1.h>
#include <bug7199708.h>
#include <java/awt/Component.h>
#include <java/io/File.h>
#include <javax/swing/JFileChooser.h>
#include <jcpp.h>

using $bug7199708 = ::bug7199708;
using $Component = ::java::awt::Component;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFileChooser = ::javax::swing::JFileChooser;

void bug7199708$1::init$($File* val$folder) {
	$set(this, val$folder, val$folder);
}

void bug7199708$1::run() {
	$init($bug7199708);
	$assignStatic($bug7199708::fileChooser, $new($JFileChooser, this->val$folder));
	$nc($bug7199708::fileChooser)->showSaveDialog(nullptr);
}

bug7199708$1::bug7199708$1() {
}

$Class* bug7199708$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$folder", "Ljava/io/File;", nullptr, $FINAL | $SYNTHETIC, $field(bug7199708$1, val$folder)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/File;)V", "()V", 0, $method(bug7199708$1, init$, void, $File*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug7199708$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug7199708",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug7199708$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug7199708$1",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug7199708"
	};
	$loadClass(bug7199708$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug7199708$1);
	});
	return class$;
}

$Class* bug7199708$1::class$ = nullptr;