#include <com/sun/jndi/ldap/ServiceLocator$SrvRecord.h>
#include <com/sun/jndi/ldap/ServiceLocator.h>
#include <java/util/StringTokenizer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringTokenizer = ::java::util::StringTokenizer;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

void ServiceLocator$SrvRecord::init$($String* srvRecord) {
	$useLocalObjectStack();
	$var($StringTokenizer, tokenizer, $new($StringTokenizer, srvRecord, " "_s));
	$var($String, port, nullptr);
	if (tokenizer->countTokens() == 4) {
		this->priority = $Integer::parseInt($(tokenizer->nextToken()));
		this->weight = $Integer::parseInt($(tokenizer->nextToken()));
		$assign(port, tokenizer->nextToken());
		$set(this, hostport, $str({$(tokenizer->nextToken()), ":"_s, port}));
	} else {
		$throwNew($IllegalArgumentException);
	}
}

int32_t ServiceLocator$SrvRecord::compareTo(ServiceLocator$SrvRecord* that) {
	if (this->priority > $nc(that)->priority) {
		return 1;
	} else if (this->priority < that->priority) {
		return -1;
	} else if (this->weight == 0 && that->weight != 0) {
		return -1;
	} else if (this->weight != 0 && that->weight == 0) {
		return 1;
	} else {
		return 0;
	}
}

int32_t ServiceLocator$SrvRecord::compareTo(Object$* that) {
	return this->compareTo($cast(ServiceLocator$SrvRecord, that));
}

ServiceLocator$SrvRecord::ServiceLocator$SrvRecord() {
}

$Class* ServiceLocator$SrvRecord::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"priority", "I", nullptr, 0, $field(ServiceLocator$SrvRecord, priority)},
		{"weight", "I", nullptr, 0, $field(ServiceLocator$SrvRecord, weight)},
		{"sum", "I", nullptr, 0, $field(ServiceLocator$SrvRecord, sum)},
		{"hostport", "Ljava/lang/String;", nullptr, 0, $field(ServiceLocator$SrvRecord, hostport)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(ServiceLocator$SrvRecord, init$, void, $String*), "java.lang.Exception"},
		{"compareTo", "(Lcom/sun/jndi/ldap/ServiceLocator$SrvRecord;)I", nullptr, $PUBLIC, $virtualMethod(ServiceLocator$SrvRecord, compareTo, int32_t, ServiceLocator$SrvRecord*)},
		{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(ServiceLocator$SrvRecord, compareTo, int32_t, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.jndi.ldap.ServiceLocator$SrvRecord", "com.sun.jndi.ldap.ServiceLocator", "SrvRecord", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.jndi.ldap.ServiceLocator$SrvRecord",
		"java.lang.Object",
		"java.lang.Comparable",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/lang/Comparable<Lcom/sun/jndi/ldap/ServiceLocator$SrvRecord;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.jndi.ldap.ServiceLocator"
	};
	$loadClass(ServiceLocator$SrvRecord, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ServiceLocator$SrvRecord);
	});
	return class$;
}

$Class* ServiceLocator$SrvRecord::class$ = nullptr;

			} // ldap
		} // jndi
	} // sun
} // com