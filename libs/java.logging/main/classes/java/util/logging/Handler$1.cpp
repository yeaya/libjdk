#include <java/util/logging/Handler$1.h>
#include <java/util/logging/Filter.h>
#include <java/util/logging/Formatter.h>
#include <java/util/logging/Handler.h>
#include <java/util/logging/Level.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Filter = ::java::util::logging::Filter;
using $Formatter = ::java::util::logging::Formatter;
using $Handler = ::java::util::logging::Handler;
using $Level = ::java::util::logging::Level;

namespace java {
	namespace util {
		namespace logging {

void Handler$1::init$($Handler* this$0, $Level* val$level, $Filter* val$filter, $Formatter* val$formatter, $String* val$encoding) {
	$set(this, this$0, this$0);
	$set(this, val$level, val$level);
	$set(this, val$filter, val$filter);
	$set(this, val$formatter, val$formatter);
	$set(this, val$encoding, val$encoding);
}

$Object* Handler$1::run() {
	this->this$0->setLevel(this->val$level);
	this->this$0->setFilter(this->val$filter);
	this->this$0->setFormatter(this->val$formatter);
	try {
		this->this$0->setEncoding(this->val$encoding);
	} catch ($Exception& ex) {
		try {
			this->this$0->setEncoding(nullptr);
		} catch ($Exception& ex2) {
		}
	}
	return nullptr;
}

Handler$1::Handler$1() {
}

$Class* Handler$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/logging/Handler;", nullptr, $FINAL | $SYNTHETIC, $field(Handler$1, this$0)},
		{"val$encoding", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(Handler$1, val$encoding)},
		{"val$formatter", "Ljava/util/logging/Formatter;", nullptr, $FINAL | $SYNTHETIC, $field(Handler$1, val$formatter)},
		{"val$filter", "Ljava/util/logging/Filter;", nullptr, $FINAL | $SYNTHETIC, $field(Handler$1, val$filter)},
		{"val$level", "Ljava/util/logging/Level;", nullptr, $FINAL | $SYNTHETIC, $field(Handler$1, val$level)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/logging/Handler;Ljava/util/logging/Level;Ljava/util/logging/Filter;Ljava/util/logging/Formatter;Ljava/lang/String;)V", "()V", 0, $method(Handler$1, init$, void, $Handler*, $Level*, $Filter*, $Formatter*, $String*)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(Handler$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.logging.Handler",
		"<init>",
		"(Ljava/util/logging/Level;Ljava/util/logging/Formatter;Ljava/util/logging/Formatter;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.logging.Handler$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.logging.Handler$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.logging.Handler"
	};
	$loadClass(Handler$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Handler$1);
	});
	return class$;
}

$Class* Handler$1::class$ = nullptr;

		} // logging
	} // util
} // java