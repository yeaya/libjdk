#include <com/sun/security/sasl/Provider$1.h>
#include <com/sun/security/sasl/Provider$ProviderService.h>
#include <com/sun/security/sasl/Provider.h>
#include <jcpp.h>

using $Provider = ::com::sun::security::sasl::Provider;
using $Provider$ProviderService = ::com::sun::security::sasl::Provider$ProviderService;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace security {
			namespace sasl {

void Provider$1::init$($Provider* this$0, $Provider* val$p) {
	$set(this, this$0, this$0);
	$set(this, val$p, val$p);
}

$Object* Provider$1::run() {
	$useLocalObjectStack();
	$Provider::access$000(this->this$0, $$new($Provider$ProviderService, this->val$p, "SaslClientFactory"_s, "DIGEST-MD5"_s, "com.sun.security.sasl.digest.FactoryImpl"_s));
	$Provider::access$100(this->this$0, $$new($Provider$ProviderService, this->val$p, "SaslClientFactory"_s, "NTLM"_s, "com.sun.security.sasl.ntlm.FactoryImpl"_s));
	$Provider::access$200(this->this$0, $$new($Provider$ProviderService, this->val$p, "SaslClientFactory"_s, "EXTERNAL"_s, "com.sun.security.sasl.ClientFactoryImpl"_s));
	$Provider::access$300(this->this$0, $$new($Provider$ProviderService, this->val$p, "SaslClientFactory"_s, "PLAIN"_s, "com.sun.security.sasl.ClientFactoryImpl"_s));
	$Provider::access$400(this->this$0, $$new($Provider$ProviderService, this->val$p, "SaslClientFactory"_s, "CRAM-MD5"_s, "com.sun.security.sasl.ClientFactoryImpl"_s));
	$Provider::access$500(this->this$0, $$new($Provider$ProviderService, this->val$p, "SaslServerFactory"_s, "CRAM-MD5"_s, "com.sun.security.sasl.ServerFactoryImpl"_s));
	$Provider::access$600(this->this$0, $$new($Provider$ProviderService, this->val$p, "SaslServerFactory"_s, "DIGEST-MD5"_s, "com.sun.security.sasl.digest.FactoryImpl"_s));
	$Provider::access$700(this->this$0, $$new($Provider$ProviderService, this->val$p, "SaslServerFactory"_s, "NTLM"_s, "com.sun.security.sasl.ntlm.FactoryImpl"_s));
	return nullptr;
}

Provider$1::Provider$1() {
}

$Class* Provider$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/security/sasl/Provider;", nullptr, $FINAL | $SYNTHETIC, $field(Provider$1, this$0)},
		{"val$p", "Lcom/sun/security/sasl/Provider;", nullptr, $FINAL | $SYNTHETIC, $field(Provider$1, val$p)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/security/sasl/Provider;Lcom/sun/security/sasl/Provider;)V", "()V", 0, $method(Provider$1, init$, void, $Provider*, $Provider*)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(Provider$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.security.sasl.Provider",
		"<init>",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.security.sasl.Provider$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.security.sasl.Provider$1",
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
		"com.sun.security.sasl.Provider"
	};
	$loadClass(Provider$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Provider$1);
	});
	return class$;
}

$Class* Provider$1::class$ = nullptr;

			} // sasl
		} // security
	} // sun
} // com