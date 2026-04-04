#include <com/sun/jmx/remote/security/MBeanServerFileAccessController$Access.h>
#include <com/sun/jmx/remote/security/MBeanServerFileAccessController.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef NO_STRINGS

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace security {

void MBeanServerFileAccessController$Access::init$(bool write, bool unregister, $List* createPatternList) {
	$set(this, NO_STRINGS, $new($StringArray, 0));
	this->write = write;
	int32_t npats = (createPatternList == nullptr) ? 0 : createPatternList->size();
	if (npats == 0) {
		$set(this, createPatterns, this->NO_STRINGS);
	} else {
		$set(this, createPatterns, $cast($StringArray, $nc(createPatternList)->toArray($$new($StringArray, npats))));
	}
	this->unregister = unregister;
}

MBeanServerFileAccessController$Access::MBeanServerFileAccessController$Access() {
}

$Class* MBeanServerFileAccessController$Access::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"write", "Z", nullptr, $FINAL, $field(MBeanServerFileAccessController$Access, write)},
		{"createPatterns", "[Ljava/lang/String;", nullptr, $FINAL, $field(MBeanServerFileAccessController$Access, createPatterns)},
		{"unregister", "Z", nullptr, $PRIVATE, $field(MBeanServerFileAccessController$Access, unregister)},
		{"NO_STRINGS", "[Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(MBeanServerFileAccessController$Access, NO_STRINGS)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(ZZLjava/util/List;)V", "(ZZLjava/util/List<Ljava/lang/String;>;)V", 0, $method(MBeanServerFileAccessController$Access, init$, void, bool, bool, $List*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.jmx.remote.security.MBeanServerFileAccessController$Access", "com.sun.jmx.remote.security.MBeanServerFileAccessController", "Access", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.jmx.remote.security.MBeanServerFileAccessController$Access",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.jmx.remote.security.MBeanServerFileAccessController"
	};
	$loadClass(MBeanServerFileAccessController$Access, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MBeanServerFileAccessController$Access);
	});
	return class$;
}

$Class* MBeanServerFileAccessController$Access::class$ = nullptr;

				} // security
			} // remote
		} // jmx
	} // sun
} // com