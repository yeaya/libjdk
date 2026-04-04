#include <org/jcp/xml/dsig/internal/dom/Policy.h>
#include <java/io/Serializable.h>
#include <java/lang/SecurityException.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/net/URI.h>
#include <java/net/URISyntaxException.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/security/Security.h>
#include <java/util/Collections.h>
#include <java/util/HashMap.h>
#include <java/util/HashSet.h>
#include <java/util/Locale.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef MAX_VALUE
#undef ROOT

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityException = ::java::lang::SecurityException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $URI = ::java::net::URI;
using $URISyntaxException = ::java::net::URISyntaxException;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Security = ::java::security::Security;
using $Collections = ::java::util::Collections;
using $HashMap = ::java::util::HashMap;
using $HashSet = ::java::util::HashSet;
using $Locale = ::java::util::Locale;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

class Policy$$Lambda$lambda$initialize$0 : public $PrivilegedAction {
	$class(Policy$$Lambda$lambda$initialize$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		 return $of(Policy::lambda$initialize$0());
	}
};
$Class* Policy$$Lambda$lambda$initialize$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Policy$$Lambda$lambda$initialize$0, init$, void)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Policy$$Lambda$lambda$initialize$0, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"org.jcp.xml.dsig.internal.dom.Policy$$Lambda$lambda$initialize$0",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$
	};
	$loadClass(Policy$$Lambda$lambda$initialize$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Policy$$Lambda$lambda$initialize$0);
	});
	return class$;
}
$Class* Policy$$Lambda$lambda$initialize$0::class$ = nullptr;

$Set* Policy::disallowedAlgs = nullptr;
int32_t Policy::maxTrans = 0;
int32_t Policy::maxRefs = 0;
$Set* Policy::disallowedRefUriSchemes = nullptr;
$Map* Policy::minKeyMap = nullptr;
bool Policy::noDuplicateIds = false;
bool Policy::noRMLoops = false;

void Policy::init$() {
}

void Policy::initialize() {
	$init(Policy);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($String, prop, $cast($String, $AccessController::doPrivileged($cast($PrivilegedAction, $$new(Policy$$Lambda$lambda$initialize$0)))));
	if (prop == nullptr || prop->isEmpty()) {
		return;
	}
	$var($StringArray, entries, $nc(prop)->split(","_s));
	{
		$var($StringArray, arr$, entries);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$var($String, entry, arr$->get(i$));
			{
				$var($StringArray, tokens, $nc(entry)->split("\\s"_s));
				$var($String, type, tokens->get(0));
				{
					$var($String, s3042$, type);
					int32_t tmp3042$ = -1;
					switch ($nc(s3042$)->hashCode()) {
					case 0x6244c421:
						if (s3042$->equals("disallowAlg"_s)) {
							tmp3042$ = 0;
						}
						break;
					case 0x532e170b:
						if (s3042$->equals("maxTransforms"_s)) {
							tmp3042$ = 1;
						}
						break;
					case 0x0cabbf0c:
						if (s3042$->equals("maxReferences"_s)) {
							tmp3042$ = 2;
						}
						break;
					case (int32_t)0xac7dfa92:
						if (s3042$->equals("disallowReferenceUriSchemes"_s)) {
							tmp3042$ = 3;
						}
						break;
					case (int32_t)0xa8b53c4e:
						if (s3042$->equals("minKeySize"_s)) {
							tmp3042$ = 4;
						}
						break;
					case (int32_t)0xb94e7a0e:
						if (s3042$->equals("noDuplicateIds"_s)) {
							tmp3042$ = 5;
						}
						break;
					case 0x75e9a17b:
						if (s3042$->equals("noRetrievalMethodLoops"_s)) {
							tmp3042$ = 6;
						}
						break;
					}
					switch (tmp3042$) {
					case 0:
						if (tokens->length != 2) {
							error(entry);
						}
						$nc(Policy::disallowedAlgs)->add($($URI::create(tokens->get(1))));
						break;
					case 1:
						if (tokens->length != 2) {
							error(entry);
						}
						Policy::maxTrans = $Integer::parseUnsignedInt(tokens->get(1));
						break;
					case 2:
						if (tokens->length != 2) {
							error(entry);
						}
						Policy::maxRefs = $Integer::parseUnsignedInt(tokens->get(1));
						break;
					case 3:
						if (tokens->length == 1) {
							error(entry);
						}
						for (int32_t i = 1; i < tokens->length; ++i) {
							$var($String, scheme, tokens->get(i));
							$init($Locale);
							$nc(Policy::disallowedRefUriSchemes)->add($($nc(scheme)->toLowerCase($Locale::ROOT)));
						}
						break;
					case 4:
						if (tokens->length != 3) {
							error(entry);
						}
						$nc(Policy::minKeyMap)->put(tokens->get(1), $($Integer::valueOf($Integer::parseUnsignedInt(tokens->get(2)))));
						break;
					case 5:
						if (tokens->length != 1) {
							error(entry);
						}
						Policy::noDuplicateIds = true;
						break;
					case 6:
						if (tokens->length != 1) {
							error(entry);
						}
						Policy::noRMLoops = true;
						break;
					default:
						error(entry);
					}
				}
			}
		}
	}
}

bool Policy::restrictAlg($String* alg) {
	$init(Policy);
	try {
		$var($URI, uri, $new($URI, alg));
		return $nc(Policy::disallowedAlgs)->contains(uri);
	} catch ($URISyntaxException& use) {
		return false;
	}
	$shouldNotReachHere();
}

bool Policy::restrictNumTransforms(int32_t numTrans) {
	$init(Policy);
	return (numTrans > Policy::maxTrans);
}

bool Policy::restrictNumReferences(int32_t numRefs) {
	$init(Policy);
	return (numRefs > Policy::maxRefs);
}

bool Policy::restrictReferenceUriScheme($String* uri) {
	$init(Policy);
	$useLocalObjectStack();
	if (uri != nullptr) {
		$var($String, scheme, $$nc($URI::create(uri))->getScheme());
		if (scheme != nullptr) {
			$init($Locale);
			return $nc(Policy::disallowedRefUriSchemes)->contains($(scheme->toLowerCase($Locale::ROOT)));
		}
	}
	return false;
}

bool Policy::restrictKey($String* type, int32_t size) {
	$init(Policy);
	$useLocalObjectStack();
	return (size < $$sure($Integer, $nc(Policy::minKeyMap)->getOrDefault(type, $($Integer::valueOf(0))))->intValue());
}

bool Policy::restrictDuplicateIds() {
	$init(Policy);
	return Policy::noDuplicateIds;
}

bool Policy::restrictRetrievalMethodLoops() {
	$init(Policy);
	return Policy::noRMLoops;
}

$Set* Policy::disabledAlgs() {
	$init(Policy);
	return $Collections::unmodifiableSet(Policy::disallowedAlgs);
}

int32_t Policy::maxTransforms() {
	$init(Policy);
	return Policy::maxTrans;
}

int32_t Policy::maxReferences() {
	$init(Policy);
	return Policy::maxRefs;
}

$Set* Policy::disabledReferenceUriSchemes() {
	$init(Policy);
	return $Collections::unmodifiableSet(Policy::disallowedRefUriSchemes);
}

int32_t Policy::minKeySize($String* type) {
	$init(Policy);
	$useLocalObjectStack();
	return $$sure($Integer, $nc(Policy::minKeyMap)->getOrDefault(type, $($Integer::valueOf(0))))->intValue();
}

void Policy::error($String* entry) {
	$init(Policy);
	$throwNew($IllegalArgumentException, $$str({"Invalid jdk.xml.dsig.secureValidationPolicy entry: "_s, entry}));
}

$String* Policy::lambda$initialize$0() {
	$init(Policy);
	return $Security::getProperty("jdk.xml.dsig.secureValidationPolicy"_s);
}

void Policy::clinit$($Class* clazz) {
	$assignStatic(Policy::disallowedAlgs, $new($HashSet));
	Policy::maxTrans = $Integer::MAX_VALUE;
	Policy::maxRefs = $Integer::MAX_VALUE;
	$assignStatic(Policy::disallowedRefUriSchemes, $new($HashSet));
	$assignStatic(Policy::minKeyMap, $new($HashMap));
	Policy::noDuplicateIds = false;
	Policy::noRMLoops = false;
	{
		try {
			Policy::initialize();
		} catch ($Exception& e) {
			$throwNew($SecurityException, "Cannot initialize the secure validation policy"_s, e);
		}
	}
}

Policy::Policy() {
}

$Class* Policy::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("org.jcp.xml.dsig.internal.dom.Policy$$Lambda$lambda$initialize$0")) {
			return Policy$$Lambda$lambda$initialize$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"disallowedAlgs", "Ljava/util/Set;", "Ljava/util/Set<Ljava/net/URI;>;", $PRIVATE | $STATIC, $staticField(Policy, disallowedAlgs)},
		{"maxTrans", "I", nullptr, $PRIVATE | $STATIC, $staticField(Policy, maxTrans)},
		{"maxRefs", "I", nullptr, $PRIVATE | $STATIC, $staticField(Policy, maxRefs)},
		{"disallowedRefUriSchemes", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE | $STATIC, $staticField(Policy, disallowedRefUriSchemes)},
		{"minKeyMap", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Integer;>;", $PRIVATE | $STATIC, $staticField(Policy, minKeyMap)},
		{"noDuplicateIds", "Z", nullptr, $PRIVATE | $STATIC, $staticField(Policy, noDuplicateIds)},
		{"noRMLoops", "Z", nullptr, $PRIVATE | $STATIC, $staticField(Policy, noRMLoops)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(Policy, init$, void)},
		{"disabledAlgs", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/net/URI;>;", $PUBLIC | $STATIC, $staticMethod(Policy, disabledAlgs, $Set*)},
		{"disabledReferenceUriSchemes", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", $PUBLIC | $STATIC, $staticMethod(Policy, disabledReferenceUriSchemes, $Set*)},
		{"error", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(Policy, error, void, $String*)},
		{"initialize", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(Policy, initialize, void)},
		{"lambda$initialize$0", "()Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Policy, lambda$initialize$0, $String*)},
		{"maxReferences", "()I", nullptr, $PUBLIC | $STATIC, $staticMethod(Policy, maxReferences, int32_t)},
		{"maxTransforms", "()I", nullptr, $PUBLIC | $STATIC, $staticMethod(Policy, maxTransforms, int32_t)},
		{"minKeySize", "(Ljava/lang/String;)I", nullptr, $PUBLIC | $STATIC, $staticMethod(Policy, minKeySize, int32_t, $String*)},
		{"restrictAlg", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(Policy, restrictAlg, bool, $String*)},
		{"restrictDuplicateIds", "()Z", nullptr, $PUBLIC | $STATIC, $staticMethod(Policy, restrictDuplicateIds, bool)},
		{"restrictKey", "(Ljava/lang/String;I)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(Policy, restrictKey, bool, $String*, int32_t)},
		{"restrictNumReferences", "(I)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(Policy, restrictNumReferences, bool, int32_t)},
		{"restrictNumTransforms", "(I)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(Policy, restrictNumTransforms, bool, int32_t)},
		{"restrictReferenceUriScheme", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(Policy, restrictReferenceUriScheme, bool, $String*)},
		{"restrictRetrievalMethodLoops", "()Z", nullptr, $PUBLIC | $STATIC, $staticMethod(Policy, restrictRetrievalMethodLoops, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"org.jcp.xml.dsig.internal.dom.Policy",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Policy, name, initialize, &classInfo$$, Policy::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Policy);
	});
	return class$;
}

$Class* Policy::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org