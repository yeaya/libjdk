#include <bug8010718$1$1.h>
#include <bug8010718$1.h>
#include <java/io/File.h>
#include <javax/swing/filechooser/FileFilter.h>
#include <jcpp.h>

using $bug8010718$1 = ::bug8010718$1;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileFilter = ::javax::swing::filechooser::FileFilter;

void bug8010718$1$1::init$($bug8010718$1* this$0) {
	$set(this, this$0, this$0);
	$FileFilter::init$();
}

bool bug8010718$1$1::accept($File* f) {
	$useLocalObjectStack();
	bool var$0 = $nc(f)->isDirectory();
	return var$0 || $($$nc(f->getName())->toLowerCase())->endsWith(".xml"_s);
}

$String* bug8010718$1$1::getDescription() {
	return "XML"_s;
}

bug8010718$1$1::bug8010718$1$1() {
}

$Class* bug8010718$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lbug8010718$1;", nullptr, $FINAL | $SYNTHETIC, $field(bug8010718$1$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lbug8010718$1;)V", nullptr, 0, $method(bug8010718$1$1, init$, void, $bug8010718$1*)},
		{"accept", "(Ljava/io/File;)Z", nullptr, $PUBLIC, $virtualMethod(bug8010718$1$1, accept, bool, $File*)},
		{"getDescription", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(bug8010718$1$1, getDescription, $String*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug8010718$1",
		"run",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug8010718$1", nullptr, nullptr, 0},
		{"bug8010718$1$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug8010718$1$1",
		"javax.swing.filechooser.FileFilter",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug8010718"
	};
	$loadClass(bug8010718$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug8010718$1$1);
	});
	return class$;
}

$Class* bug8010718$1$1::class$ = nullptr;