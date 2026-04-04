#include <java/beans/XMLDecoder$1.h>
#include <com/sun/beans/decoder/DocumentHandler.h>
#include <java/beans/XMLDecoder.h>
#include <org/xml/sax/InputSource.h>
#include <jcpp.h>

using $XMLDecoder = ::java::beans::XMLDecoder;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace beans {

void XMLDecoder$1::init$($XMLDecoder* this$0) {
	$set(this, this$0, this$0);
}

$Object* XMLDecoder$1::run() {
	$nc(this->this$0->handler)->parse(this->this$0->input);
	return nullptr;
}

XMLDecoder$1::XMLDecoder$1() {
}

$Class* XMLDecoder$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/beans/XMLDecoder;", nullptr, $FINAL | $SYNTHETIC, $field(XMLDecoder$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/beans/XMLDecoder;)V", nullptr, 0, $method(XMLDecoder$1, init$, void, $XMLDecoder*)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(XMLDecoder$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.beans.XMLDecoder",
		"parsingComplete",
		"()Z"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.beans.XMLDecoder$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.beans.XMLDecoder$1",
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
		"java.beans.XMLDecoder"
	};
	$loadClass(XMLDecoder$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XMLDecoder$1);
	});
	return class$;
}

$Class* XMLDecoder$1::class$ = nullptr;

	} // beans
} // java