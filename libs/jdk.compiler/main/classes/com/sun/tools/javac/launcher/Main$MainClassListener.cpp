#include <com/sun/tools/javac/launcher/Main$MainClassListener.h>
#include <com/sun/source/util/JavacTask.h>
#include <com/sun/source/util/TaskEvent$Kind.h>
#include <com/sun/source/util/TaskEvent.h>
#include <com/sun/tools/javac/launcher/Main.h>
#include <javax/lang/model/element/NestingKind.h>
#include <javax/lang/model/element/TypeElement.h>
#include <jcpp.h>

#undef ANALYZE
#undef TOP_LEVEL

using $JavacTask = ::com::sun::source::util::JavacTask;
using $TaskEvent = ::com::sun::source::util::TaskEvent;
using $TaskEvent$Kind = ::com::sun::source::util::TaskEvent$Kind;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NestingKind = ::javax::lang::model::element::NestingKind;
using $TypeElement = ::javax::lang::model::element::TypeElement;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace launcher {

void Main$MainClassListener::init$($JavacTask* t) {
	$nc(t)->addTaskListener(this);
}

void Main$MainClassListener::started($TaskEvent* ev) {
	$init($TaskEvent$Kind);
	if ($nc(ev)->getKind() == $TaskEvent$Kind::ANALYZE && this->mainClass == nullptr) {
		$var($TypeElement, te, ev->getTypeElement());
		$init($NestingKind);
		if ($nc(te)->getNestingKind() == $NestingKind::TOP_LEVEL) {
			$set(this, mainClass, te);
		}
	}
}

Main$MainClassListener::Main$MainClassListener() {
}

$Class* Main$MainClassListener::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"mainClass", "Ljavax/lang/model/element/TypeElement;", nullptr, 0, $field(Main$MainClassListener, mainClass)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/source/util/JavacTask;)V", nullptr, 0, $method(Main$MainClassListener, init$, void, $JavacTask*)},
		{"started", "(Lcom/sun/source/util/TaskEvent;)V", nullptr, $PUBLIC, $virtualMethod(Main$MainClassListener, started, void, $TaskEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.launcher.Main$MainClassListener", "com.sun.tools.javac.launcher.Main", "MainClassListener", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.launcher.Main$MainClassListener",
		"java.lang.Object",
		"com.sun.source.util.TaskListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.launcher.Main"
	};
	$loadClass(Main$MainClassListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Main$MainClassListener);
	});
	return class$;
}

$Class* Main$MainClassListener::class$ = nullptr;

				} // launcher
			} // javac
		} // tools
	} // sun
} // com