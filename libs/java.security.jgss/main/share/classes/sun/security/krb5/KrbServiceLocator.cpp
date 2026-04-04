#include <sun/security/krb5/KrbServiceLocator.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/net/SocketPermission.h>
#include <java/security/AccessControlContext.h>
#include <java/security/AccessController.h>
#include <java/security/Permission.h>
#include <java/security/PrivilegedActionException.h>
#include <java/security/PrivilegedExceptionAction.h>
#include <java/util/Arrays.h>
#include <java/util/Hashtable.h>
#include <java/util/Random.h>
#include <javax/naming/Context.h>
#include <javax/naming/NamingException.h>
#include <javax/naming/directory/Attribute.h>
#include <javax/naming/directory/Attributes.h>
#include <javax/naming/directory/DirContext.h>
#include <javax/naming/spi/NamingManager.h>
#include <sun/security/krb5/KrbServiceLocator$SrvRecord.h>
#include <jcpp.h>

#undef SRV_RR
#undef SRV_RR_ATTR
#undef SRV_TXT
#undef SRV_TXT_ATTR

using $PermissionArray = $Array<::java::security::Permission>;
using $KrbServiceLocator$SrvRecordArray = $Array<::sun::security::krb5::KrbServiceLocator$SrvRecord>;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $SocketPermission = ::java::net::SocketPermission;
using $AccessControlContext = ::java::security::AccessControlContext;
using $AccessController = ::java::security::AccessController;
using $PrivilegedActionException = ::java::security::PrivilegedActionException;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
using $Arrays = ::java::util::Arrays;
using $Hashtable = ::java::util::Hashtable;
using $Random = ::java::util::Random;
using $Context = ::javax::naming::Context;
using $NamingException = ::javax::naming::NamingException;
using $Attribute = ::javax::naming::directory::Attribute;
using $Attributes = ::javax::naming::directory::Attributes;
using $DirContext = ::javax::naming::directory::DirContext;
using $NamingManager = ::javax::naming::spi::NamingManager;
using $KrbServiceLocator$SrvRecord = ::sun::security::krb5::KrbServiceLocator$SrvRecord;

namespace sun {
	namespace security {
		namespace krb5 {

class KrbServiceLocator$$Lambda$lambda$getKerberosService$0 : public $PrivilegedExceptionAction {
	$class(KrbServiceLocator$$Lambda$lambda$getKerberosService$0, $NO_CLASS_INIT, $PrivilegedExceptionAction)
public:
	void init$($Context* ctx, $String* dnsUrl) {
		$set(this, ctx, ctx);
		$set(this, dnsUrl, dnsUrl);
	}
	virtual $Object* run() override {
		 return $of(KrbServiceLocator::lambda$getKerberosService$0(ctx, dnsUrl));
	}
	$Context* ctx = nullptr;
	$String* dnsUrl = nullptr;
};
$Class* KrbServiceLocator$$Lambda$lambda$getKerberosService$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"ctx", "Ljavax/naming/Context;", nullptr, $PUBLIC, $field(KrbServiceLocator$$Lambda$lambda$getKerberosService$0, ctx)},
		{"dnsUrl", "Ljava/lang/String;", nullptr, $PUBLIC, $field(KrbServiceLocator$$Lambda$lambda$getKerberosService$0, dnsUrl)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/naming/Context;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(KrbServiceLocator$$Lambda$lambda$getKerberosService$0, init$, void, $Context*, $String*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(KrbServiceLocator$$Lambda$lambda$getKerberosService$0, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.security.krb5.KrbServiceLocator$$Lambda$lambda$getKerberosService$0",
		"java.lang.Object",
		"java.security.PrivilegedExceptionAction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(KrbServiceLocator$$Lambda$lambda$getKerberosService$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(KrbServiceLocator$$Lambda$lambda$getKerberosService$0);
	});
	return class$;
}
$Class* KrbServiceLocator$$Lambda$lambda$getKerberosService$0::class$ = nullptr;

class KrbServiceLocator$$Lambda$lambda$getKerberosService$1$1 : public $PrivilegedExceptionAction {
	$class(KrbServiceLocator$$Lambda$lambda$getKerberosService$1$1, $NO_CLASS_INIT, $PrivilegedExceptionAction)
public:
	void init$($Context* ctx, $String* dnsUrl) {
		$set(this, ctx, ctx);
		$set(this, dnsUrl, dnsUrl);
	}
	virtual $Object* run() override {
		 return $of(KrbServiceLocator::lambda$getKerberosService$1(ctx, dnsUrl));
	}
	$Context* ctx = nullptr;
	$String* dnsUrl = nullptr;
};
$Class* KrbServiceLocator$$Lambda$lambda$getKerberosService$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"ctx", "Ljavax/naming/Context;", nullptr, $PUBLIC, $field(KrbServiceLocator$$Lambda$lambda$getKerberosService$1$1, ctx)},
		{"dnsUrl", "Ljava/lang/String;", nullptr, $PUBLIC, $field(KrbServiceLocator$$Lambda$lambda$getKerberosService$1$1, dnsUrl)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/naming/Context;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(KrbServiceLocator$$Lambda$lambda$getKerberosService$1$1, init$, void, $Context*, $String*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(KrbServiceLocator$$Lambda$lambda$getKerberosService$1$1, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.security.krb5.KrbServiceLocator$$Lambda$lambda$getKerberosService$1$1",
		"java.lang.Object",
		"java.security.PrivilegedExceptionAction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(KrbServiceLocator$$Lambda$lambda$getKerberosService$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(KrbServiceLocator$$Lambda$lambda$getKerberosService$1$1);
	});
	return class$;
}
$Class* KrbServiceLocator$$Lambda$lambda$getKerberosService$1$1::class$ = nullptr;

$String* KrbServiceLocator::SRV_RR = nullptr;
$StringArray* KrbServiceLocator::SRV_RR_ATTR = nullptr;
$String* KrbServiceLocator::SRV_TXT = nullptr;
$StringArray* KrbServiceLocator::SRV_TXT_ATTR = nullptr;
$Random* KrbServiceLocator::random = nullptr;

void KrbServiceLocator::init$() {
}

$StringArray* KrbServiceLocator::getKerberosService($String* realmName) {
	$init(KrbServiceLocator);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($String, dnsUrl, $str({"dns:///_kerberos."_s, realmName}));
	$var($StringArray, records, nullptr);
	try {
		$var($Context, ctx, $NamingManager::getURLContext("dns"_s, $$new($Hashtable, 0)));
		if (!($instanceOf($DirContext, ctx))) {
			return nullptr;
		}
		$var($Attributes, attrs, nullptr);
		try {
			$var($PrivilegedExceptionAction, var$0, $cast($PrivilegedExceptionAction, $new(KrbServiceLocator$$Lambda$lambda$getKerberosService$0, ctx, dnsUrl)));
			$assign(attrs, $cast($Attributes, $AccessController::doPrivileged(var$0, nullptr, $$new($PermissionArray, {$$new($SocketPermission, "*"_s, "connect,accept"_s)}))));
		} catch ($PrivilegedActionException& e) {
			$throw($$cast($NamingException, e->getCause()));
		}
		$var($Attribute, attr, nullptr);
		if (attrs != nullptr && (($assign(attr, attrs->get(KrbServiceLocator::SRV_TXT))) != nullptr)) {
			int32_t numValues = $nc(attr)->size();
			int32_t numRecords = 0;
			$var($StringArray, txtRecords, $new($StringArray, numValues));
			int32_t i = 0;
			int32_t j = 0;
			while (i < numValues) {
				try {
					txtRecords->set(j, $$cast($String, attr->get(i)));
					++j;
				} catch ($Exception& e) {
				}
				++i;
			}
			numRecords = j;
			if (numRecords < numValues) {
				$var($StringArray, trimmed, $new($StringArray, numRecords));
				$System::arraycopy(txtRecords, 0, trimmed, 0, numRecords);
				$assign(records, trimmed);
			} else {
				$assign(records, txtRecords);
			}
		}
	} catch ($NamingException& e) {
	}
	return records;
}

$StringArray* KrbServiceLocator::getKerberosService($String* realmName, $String* protocol) {
	$init(KrbServiceLocator);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($String, dnsUrl, $str({"dns:///_kerberos."_s, protocol, "."_s, realmName}));
	$var($StringArray, hostports, nullptr);
	try {
		$var($Context, ctx, $NamingManager::getURLContext("dns"_s, $$new($Hashtable, 0)));
		if (!($instanceOf($DirContext, ctx))) {
			return nullptr;
		}
		$var($Attributes, attrs, nullptr);
		try {
			$var($PrivilegedExceptionAction, var$0, $cast($PrivilegedExceptionAction, $new(KrbServiceLocator$$Lambda$lambda$getKerberosService$1$1, ctx, dnsUrl)));
			$assign(attrs, $cast($Attributes, $AccessController::doPrivileged(var$0, nullptr, $$new($PermissionArray, {$$new($SocketPermission, "*"_s, "connect,accept"_s)}))));
		} catch ($PrivilegedActionException& e) {
			$throw($$cast($NamingException, e->getCause()));
		}
		$var($Attribute, attr, nullptr);
		if (attrs != nullptr && (($assign(attr, attrs->get(KrbServiceLocator::SRV_RR))) != nullptr)) {
			int32_t numValues = $nc(attr)->size();
			int32_t numRecords = 0;
			$var($KrbServiceLocator$SrvRecordArray, srvRecords, $new($KrbServiceLocator$SrvRecordArray, numValues));
			int32_t i = 0;
			int32_t j = 0;
			while (i < numValues) {
				try {
					srvRecords->set(j, $$new($KrbServiceLocator$SrvRecord, $$cast($String, attr->get(i))));
					++j;
				} catch ($Exception& e) {
				}
				++i;
			}
			numRecords = j;
			if (numRecords < numValues) {
				$var($KrbServiceLocator$SrvRecordArray, trimmed, $new($KrbServiceLocator$SrvRecordArray, numRecords));
				$System::arraycopy(srvRecords, 0, trimmed, 0, numRecords);
				$assign(srvRecords, trimmed);
			}
			if (numRecords > 1) {
				$Arrays::sort(srvRecords);
			}
			$assign(hostports, extractHostports(srvRecords));
		}
	} catch ($NamingException& e) {
	}
	return hostports;
}

$StringArray* KrbServiceLocator::extractHostports($KrbServiceLocator$SrvRecordArray* srvRecords) {
	$init(KrbServiceLocator);
	$useLocalObjectStack();
	$var($StringArray, hostports, nullptr);
	int32_t head = 0;
	int32_t tail = 0;
	int32_t sublistLength = 0;
	int32_t k = 0;
	for (int32_t i = 0; i < $nc(srvRecords)->length; ++i) {
		if (hostports == nullptr) {
			$assign(hostports, $new($StringArray, srvRecords->length));
		}
		head = i;
		while (i < srvRecords->length - 1 && $nc(srvRecords->get(i))->priority == $nc(srvRecords->get(i + 1))->priority) {
			++i;
		}
		tail = i;
		sublistLength = (tail - head) + 1;
		for (int32_t j = 0; j < sublistLength; ++j) {
			$nc(hostports)->set(k++, $(selectHostport(srvRecords, head, tail)));
		}
	}
	return hostports;
}

$String* KrbServiceLocator::selectHostport($KrbServiceLocator$SrvRecordArray* srvRecords, int32_t head, int32_t tail) {
	$init(KrbServiceLocator);
	if (head == tail) {
		return $nc($nc(srvRecords)->get(head))->hostport;
	}
	int32_t sum = 0;
	for (int32_t i = head; i <= tail; ++i) {
		if ($nc(srvRecords)->get(i) != nullptr) {
			sum += $nc(srvRecords->get(i))->weight;
			$nc(srvRecords->get(i))->sum = sum;
		}
	}
	$var($String, hostport, nullptr);
	int32_t target = (sum == 0 ? 0 : KrbServiceLocator::random->nextInt(sum + 1));
	for (int32_t i = head; i <= tail; ++i) {
		if ($nc(srvRecords)->get(i) != nullptr && $nc(srvRecords->get(i))->sum >= target) {
			$assign(hostport, $nc(srvRecords->get(i))->hostport);
			srvRecords->set(i, nullptr);
			break;
		}
	}
	return hostport;
}

$Attributes* KrbServiceLocator::lambda$getKerberosService$1($Context* ctx, $String* dnsUrl) {
	$init(KrbServiceLocator);
	return $nc($cast($DirContext, ctx))->getAttributes(dnsUrl, KrbServiceLocator::SRV_RR_ATTR);
}

$Attributes* KrbServiceLocator::lambda$getKerberosService$0($Context* ctx, $String* dnsUrl) {
	$init(KrbServiceLocator);
	return $nc($cast($DirContext, ctx))->getAttributes(dnsUrl, KrbServiceLocator::SRV_TXT_ATTR);
}

void KrbServiceLocator::clinit$($Class* clazz) {
	$assignStatic(KrbServiceLocator::SRV_RR, "SRV"_s);
	$assignStatic(KrbServiceLocator::SRV_TXT, "TXT"_s);
	$assignStatic(KrbServiceLocator::SRV_RR_ATTR, $new($StringArray, {KrbServiceLocator::SRV_RR}));
	$assignStatic(KrbServiceLocator::SRV_TXT_ATTR, $new($StringArray, {KrbServiceLocator::SRV_TXT}));
	$assignStatic(KrbServiceLocator::random, $new($Random));
}

KrbServiceLocator::KrbServiceLocator() {
}

$Class* KrbServiceLocator::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("sun.security.krb5.KrbServiceLocator$$Lambda$lambda$getKerberosService$0")) {
			return KrbServiceLocator$$Lambda$lambda$getKerberosService$0::load$(name, initialize);
		}
		if (name->equals("sun.security.krb5.KrbServiceLocator$$Lambda$lambda$getKerberosService$1$1")) {
			return KrbServiceLocator$$Lambda$lambda$getKerberosService$1$1::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"SRV_RR", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(KrbServiceLocator, SRV_RR)},
		{"SRV_RR_ATTR", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(KrbServiceLocator, SRV_RR_ATTR)},
		{"SRV_TXT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(KrbServiceLocator, SRV_TXT)},
		{"SRV_TXT_ATTR", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(KrbServiceLocator, SRV_TXT_ATTR)},
		{"random", "Ljava/util/Random;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(KrbServiceLocator, random)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(KrbServiceLocator, init$, void)},
		{"extractHostports", "([Lsun/security/krb5/KrbServiceLocator$SrvRecord;)[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(KrbServiceLocator, extractHostports, $StringArray*, $KrbServiceLocator$SrvRecordArray*)},
		{"getKerberosService", "(Ljava/lang/String;)[Ljava/lang/String;", nullptr, $STATIC, $staticMethod(KrbServiceLocator, getKerberosService, $StringArray*, $String*)},
		{"getKerberosService", "(Ljava/lang/String;Ljava/lang/String;)[Ljava/lang/String;", nullptr, $STATIC, $staticMethod(KrbServiceLocator, getKerberosService, $StringArray*, $String*, $String*)},
		{"lambda$getKerberosService$0", "(Ljavax/naming/Context;Ljava/lang/String;)Ljavax/naming/directory/Attributes;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(KrbServiceLocator, lambda$getKerberosService$0, $Attributes*, $Context*, $String*), "java.lang.Exception"},
		{"lambda$getKerberosService$1", "(Ljavax/naming/Context;Ljava/lang/String;)Ljavax/naming/directory/Attributes;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(KrbServiceLocator, lambda$getKerberosService$1, $Attributes*, $Context*, $String*), "java.lang.Exception"},
		{"selectHostport", "([Lsun/security/krb5/KrbServiceLocator$SrvRecord;II)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(KrbServiceLocator, selectHostport, $String*, $KrbServiceLocator$SrvRecordArray*, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.krb5.KrbServiceLocator$SrvRecord", "sun.security.krb5.KrbServiceLocator", "SrvRecord", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.krb5.KrbServiceLocator",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.security.krb5.KrbServiceLocator$SrvRecord"
	};
	$loadClass(KrbServiceLocator, name, initialize, &classInfo$$, KrbServiceLocator::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(KrbServiceLocator);
	});
	return class$;
}

$Class* KrbServiceLocator::class$ = nullptr;

		} // krb5
	} // security
} // sun