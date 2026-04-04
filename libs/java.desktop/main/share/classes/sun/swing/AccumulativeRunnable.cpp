#include <sun/swing/AccumulativeRunnable.h>
#include <java/util/ArrayList.h>
#include <java/util/Collections.h>
#include <java/util/List.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;
using $Collections = ::java::util::Collections;
using $List = ::java::util::List;
using $SwingUtilities = ::javax::swing::SwingUtilities;

namespace sun {
	namespace swing {

void AccumulativeRunnable::init$() {
	$set(this, arguments, nullptr);
}

void AccumulativeRunnable::run() {
	run($(flush()));
}

void AccumulativeRunnable::add($ObjectArray* args) {
	$synchronized(this) {
		bool isSubmitted = true;
		if (this->arguments == nullptr) {
			isSubmitted = false;
			$set(this, arguments, $new($ArrayList));
		}
		$Collections::addAll(this->arguments, args);
		if (!isSubmitted) {
			submit();
		}
	}
}

void AccumulativeRunnable::submit() {
	$SwingUtilities::invokeLater(this);
}

$List* AccumulativeRunnable::flush() {
	$synchronized(this) {
		$var($List, list, this->arguments);
		$set(this, arguments, nullptr);
		return list;
	}
}

AccumulativeRunnable::AccumulativeRunnable() {
}

$Class* AccumulativeRunnable::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"arguments", "Ljava/util/List;", "Ljava/util/List<TT;>;", $PRIVATE, $field(AccumulativeRunnable, arguments)},
		{}
	};
	$CompoundAttribute addmethodAnnotations$$[] = {
		{"Ljava/lang/SafeVarargs;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AccumulativeRunnable, init$, void)},
		{"add", "([Ljava/lang/Object;)V", "([TT;)V", $PUBLIC | $FINAL | $SYNCHRONIZED | $TRANSIENT, $method(AccumulativeRunnable, add, void, $ObjectArray*), nullptr, nullptr, addmethodAnnotations$$},
		{"flush", "()Ljava/util/List;", "()Ljava/util/List<TT;>;", $PRIVATE | $SYNCHRONIZED, $method(AccumulativeRunnable, flush, $List*)},
		{"run", "(Ljava/util/List;)V", "(Ljava/util/List<TT;>;)V", $PROTECTED | $ABSTRACT, $virtualMethod(AccumulativeRunnable, run, void, $List*)},
		{"run", "()V", nullptr, $PUBLIC | $FINAL, $virtualMethod(AccumulativeRunnable, run, void)},
		{"submit", "()V", nullptr, $PROTECTED, $virtualMethod(AccumulativeRunnable, submit, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"sun.swing.AccumulativeRunnable",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/Object;Ljava/lang/Runnable;"
	};
	$loadClass(AccumulativeRunnable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AccumulativeRunnable);
	});
	return class$;
}

$Class* AccumulativeRunnable::class$ = nullptr;

	} // swing
} // sun