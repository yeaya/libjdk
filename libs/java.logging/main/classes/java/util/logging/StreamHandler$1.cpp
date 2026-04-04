#include <java/util/logging/StreamHandler$1.h>
#include <java/io/OutputStream.h>
#include <java/util/logging/StreamHandler.h>
#include <jcpp.h>

using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StreamHandler = ::java::util::logging::StreamHandler;

namespace java {
	namespace util {
		namespace logging {

void StreamHandler$1::init$($StreamHandler* this$0, $OutputStream* val$out) {
	$set(this, this$0, this$0);
	$set(this, val$out, val$out);
}

$Object* StreamHandler$1::run() {
	this->this$0->setOutputStream(this->val$out);
	return nullptr;
}

StreamHandler$1::StreamHandler$1() {
}

$Class* StreamHandler$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/logging/StreamHandler;", nullptr, $FINAL | $SYNTHETIC, $field(StreamHandler$1, this$0)},
		{"val$out", "Ljava/io/OutputStream;", nullptr, $FINAL | $SYNTHETIC, $field(StreamHandler$1, val$out)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/logging/StreamHandler;Ljava/io/OutputStream;)V", "()V", 0, $method(StreamHandler$1, init$, void, $StreamHandler*, $OutputStream*)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(StreamHandler$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.logging.StreamHandler",
		"setOutputStreamPrivileged",
		"(Ljava/io/OutputStream;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.logging.StreamHandler$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.logging.StreamHandler$1",
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
		"java.util.logging.StreamHandler"
	};
	$loadClass(StreamHandler$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StreamHandler$1);
	});
	return class$;
}

$Class* StreamHandler$1::class$ = nullptr;

		} // logging
	} // util
} // java