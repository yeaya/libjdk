#include <sun/security/jgss/wrapper/GSSLibStub.h>
#include <java/util/Hashtable.h>
#include <org/ietf/jgss/ChannelBinding.h>
#include <org/ietf/jgss/MessageProp.h>
#include <org/ietf/jgss/Oid.h>
#include <sun/security/jgss/wrapper/NativeGSSContext.h>
#include <sun/security/jgss/wrapper/SunNativeProvider.h>
#include <jcpp.h>

using $OidArray = $Array<::org::ietf::jgss::Oid>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Hashtable = ::java::util::Hashtable;
using $ChannelBinding = ::org::ietf::jgss::ChannelBinding;
using $MessageProp = ::org::ietf::jgss::MessageProp;
using $Oid = ::org::ietf::jgss::Oid;
using $NativeGSSContext = ::sun::security::jgss::wrapper::NativeGSSContext;
using $SunNativeProvider = ::sun::security::jgss::wrapper::SunNativeProvider;

namespace sun {
	namespace security {
		namespace jgss {
			namespace wrapper {

$Hashtable* GSSLibStub::table = nullptr;

bool GSSLibStub::init($String* lib, bool debug) {
	$init(GSSLibStub);
	$prepareNativeStatic(init, bool, $String* lib, bool debug);
	bool $ret = $invokeNativeStatic(lib, debug);
	$finishNativeStatic();
	return $ret;
}

int64_t GSSLibStub::getMechPtr($bytes* oidDerEncoding) {
	$init(GSSLibStub);
	$prepareNativeStatic(getMechPtr, int64_t, $bytes* oidDerEncoding);
	int64_t $ret = $invokeNativeStatic(oidDerEncoding);
	$finishNativeStatic();
	return $ret;
}

$OidArray* GSSLibStub::indicateMechs() {
	$init(GSSLibStub);
	$prepareNativeStatic(indicateMechs, $OidArray*);
	$var($OidArray, $ret, $invokeNativeStaticObject());
	$finishNativeStatic();
	return $ret;
}

$OidArray* GSSLibStub::inquireNamesForMech() {
	$prepareNative(inquireNamesForMech, $OidArray*);
	$var($OidArray, $ret, $invokeNativeObject());
	$finishNative();
	return $ret;
}

void GSSLibStub::releaseName(int64_t pName) {
	$prepareNative(releaseName, void, int64_t pName);
	$invokeNative(pName);
	$finishNative();
}

int64_t GSSLibStub::importName($bytes* name, $Oid* type) {
	$prepareNative(importName, int64_t, $bytes* name, $Oid* type);
	int64_t $ret = $invokeNative(name, type);
	$finishNative();
	return $ret;
}

bool GSSLibStub::compareName(int64_t pName1, int64_t pName2) {
	$prepareNative(compareName, bool, int64_t pName1, int64_t pName2);
	bool $ret = $invokeNative(pName1, pName2);
	$finishNative();
	return $ret;
}

int64_t GSSLibStub::canonicalizeName(int64_t pName) {
	$prepareNative(canonicalizeName, int64_t, int64_t pName);
	int64_t $ret = $invokeNative(pName);
	$finishNative();
	return $ret;
}

$bytes* GSSLibStub::exportName(int64_t pName) {
	$prepareNative(exportName, $bytes*, int64_t pName);
	$var($bytes, $ret, $invokeNativeObject(pName));
	$finishNative();
	return $ret;
}

$ObjectArray* GSSLibStub::displayName(int64_t pName) {
	$prepareNative(displayName, $ObjectArray*, int64_t pName);
	$var($ObjectArray, $ret, $invokeNativeObject(pName));
	$finishNative();
	return $ret;
}

int64_t GSSLibStub::acquireCred(int64_t pName, int32_t lifetime, int32_t usage) {
	$prepareNative(acquireCred, int64_t, int64_t pName, int32_t lifetime, int32_t usage);
	int64_t $ret = $invokeNative(pName, lifetime, usage);
	$finishNative();
	return $ret;
}

int64_t GSSLibStub::releaseCred(int64_t pCred) {
	$prepareNative(releaseCred, int64_t, int64_t pCred);
	int64_t $ret = $invokeNative(pCred);
	$finishNative();
	return $ret;
}

int64_t GSSLibStub::getCredName(int64_t pCred) {
	$prepareNative(getCredName, int64_t, int64_t pCred);
	int64_t $ret = $invokeNative(pCred);
	$finishNative();
	return $ret;
}

int32_t GSSLibStub::getCredTime(int64_t pCred) {
	$prepareNative(getCredTime, int32_t, int64_t pCred);
	int32_t $ret = $invokeNative(pCred);
	$finishNative();
	return $ret;
}

int32_t GSSLibStub::getCredUsage(int64_t pCred) {
	$prepareNative(getCredUsage, int32_t, int64_t pCred);
	int32_t $ret = $invokeNative(pCred);
	$finishNative();
	return $ret;
}

$NativeGSSContext* GSSLibStub::importContext($bytes* interProcToken) {
	$prepareNative(importContext, $NativeGSSContext*, $bytes* interProcToken);
	$var($NativeGSSContext, $ret, $invokeNativeObject(interProcToken));
	$finishNative();
	return $ret;
}

$bytes* GSSLibStub::initContext(int64_t pCred, int64_t targetName, $ChannelBinding* cb, $bytes* inToken, $NativeGSSContext* context) {
	$prepareNative(initContext, $bytes*, int64_t pCred, int64_t targetName, $ChannelBinding* cb, $bytes* inToken, $NativeGSSContext* context);
	$var($bytes, $ret, $invokeNativeObject(pCred, targetName, cb, inToken, context));
	$finishNative();
	return $ret;
}

$bytes* GSSLibStub::acceptContext(int64_t pCred, $ChannelBinding* cb, $bytes* inToken, $NativeGSSContext* context) {
	$prepareNative(acceptContext, $bytes*, int64_t pCred, $ChannelBinding* cb, $bytes* inToken, $NativeGSSContext* context);
	$var($bytes, $ret, $invokeNativeObject(pCred, cb, inToken, context));
	$finishNative();
	return $ret;
}

$longs* GSSLibStub::inquireContext(int64_t pContext) {
	$prepareNative(inquireContext, $longs*, int64_t pContext);
	$var($longs, $ret, $invokeNativeObject(pContext));
	$finishNative();
	return $ret;
}

$Oid* GSSLibStub::getContextMech(int64_t pContext) {
	$prepareNative(getContextMech, $Oid*, int64_t pContext);
	$var($Oid, $ret, $invokeNativeObject(pContext));
	$finishNative();
	return $ret;
}

int64_t GSSLibStub::getContextName(int64_t pContext, bool isSrc) {
	$prepareNative(getContextName, int64_t, int64_t pContext, bool isSrc);
	int64_t $ret = $invokeNative(pContext, isSrc);
	$finishNative();
	return $ret;
}

int32_t GSSLibStub::getContextTime(int64_t pContext) {
	$prepareNative(getContextTime, int32_t, int64_t pContext);
	int32_t $ret = $invokeNative(pContext);
	$finishNative();
	return $ret;
}

int64_t GSSLibStub::deleteContext(int64_t pContext) {
	$prepareNative(deleteContext, int64_t, int64_t pContext);
	int64_t $ret = $invokeNative(pContext);
	$finishNative();
	return $ret;
}

int32_t GSSLibStub::wrapSizeLimit(int64_t pContext, int32_t flags, int32_t qop, int32_t outSize) {
	$prepareNative(wrapSizeLimit, int32_t, int64_t pContext, int32_t flags, int32_t qop, int32_t outSize);
	int32_t $ret = $invokeNative(pContext, flags, qop, outSize);
	$finishNative();
	return $ret;
}

$bytes* GSSLibStub::exportContext(int64_t pContext) {
	$prepareNative(exportContext, $bytes*, int64_t pContext);
	$var($bytes, $ret, $invokeNativeObject(pContext));
	$finishNative();
	return $ret;
}

$bytes* GSSLibStub::getMic(int64_t pContext, int32_t qop, $bytes* msg) {
	$prepareNative(getMic, $bytes*, int64_t pContext, int32_t qop, $bytes* msg);
	$var($bytes, $ret, $invokeNativeObject(pContext, qop, msg));
	$finishNative();
	return $ret;
}

void GSSLibStub::verifyMic(int64_t pContext, $bytes* token, $bytes* msg, $MessageProp* prop) {
	$prepareNative(verifyMic, void, int64_t pContext, $bytes* token, $bytes* msg, $MessageProp* prop);
	$invokeNative(pContext, token, msg, prop);
	$finishNative();
}

$bytes* GSSLibStub::wrap(int64_t pContext, $bytes* msg, $MessageProp* prop) {
	$prepareNative(wrap, $bytes*, int64_t pContext, $bytes* msg, $MessageProp* prop);
	$var($bytes, $ret, $invokeNativeObject(pContext, msg, prop));
	$finishNative();
	return $ret;
}

$bytes* GSSLibStub::unwrap(int64_t pContext, $bytes* msgToken, $MessageProp* prop) {
	$prepareNative(unwrap, $bytes*, int64_t pContext, $bytes* msgToken, $MessageProp* prop);
	$var($bytes, $ret, $invokeNativeObject(pContext, msgToken, prop));
	$finishNative();
	return $ret;
}

GSSLibStub* GSSLibStub::getInstance($Oid* mech) {
	$init(GSSLibStub);
	$var(GSSLibStub, s, $cast(GSSLibStub, $nc(GSSLibStub::table)->get(mech)));
	if (s == nullptr) {
		$assign(s, $new(GSSLibStub, mech));
		GSSLibStub::table->put(mech, s);
	}
	return s;
}

void GSSLibStub::init$($Oid* mech) {
	$useLocalObjectStack();
	$SunNativeProvider::debug($$str({"Created GSSLibStub for mech "_s, mech}));
	$set(this, mech, mech);
	this->pMech = getMechPtr($($nc(mech)->getDER()));
}

bool GSSLibStub::equals(Object$* obj) {
	if ($equals(obj, this)) {
		return true;
	}
	if (!($instanceOf(GSSLibStub, obj))) {
		return false;
	}
	return ($nc(this->mech)->equals($($nc($cast(GSSLibStub, obj))->getMech())));
}

int32_t GSSLibStub::hashCode() {
	return $nc(this->mech)->hashCode();
}

$Oid* GSSLibStub::getMech() {
	return this->mech;
}

void GSSLibStub::clinit$($Class* clazz) {
	$assignStatic(GSSLibStub::table, $new($Hashtable, 5));
}

GSSLibStub::GSSLibStub() {
}

$Class* GSSLibStub::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"mech", "Lorg/ietf/jgss/Oid;", nullptr, $PRIVATE, $field(GSSLibStub, mech)},
		{"pMech", "J", nullptr, $PRIVATE, $field(GSSLibStub, pMech)},
		{"table", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Lorg/ietf/jgss/Oid;Lsun/security/jgss/wrapper/GSSLibStub;>;", $PRIVATE | $STATIC, $staticField(GSSLibStub, table)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lorg/ietf/jgss/Oid;)V", nullptr, $PRIVATE, $method(GSSLibStub, init$, void, $Oid*), "org.ietf.jgss.GSSException"},
		{"acceptContext", "(JLorg/ietf/jgss/ChannelBinding;[BLsun/security/jgss/wrapper/NativeGSSContext;)[B", nullptr, $NATIVE, $virtualMethod(GSSLibStub, acceptContext, $bytes*, int64_t, $ChannelBinding*, $bytes*, $NativeGSSContext*)},
		{"acquireCred", "(JII)J", nullptr, $NATIVE, $virtualMethod(GSSLibStub, acquireCred, int64_t, int64_t, int32_t, int32_t), "org.ietf.jgss.GSSException"},
		{"canonicalizeName", "(J)J", nullptr, $NATIVE, $virtualMethod(GSSLibStub, canonicalizeName, int64_t, int64_t)},
		{"compareName", "(JJ)Z", nullptr, $NATIVE, $virtualMethod(GSSLibStub, compareName, bool, int64_t, int64_t)},
		{"deleteContext", "(J)J", nullptr, $NATIVE, $virtualMethod(GSSLibStub, deleteContext, int64_t, int64_t)},
		{"displayName", "(J)[Ljava/lang/Object;", nullptr, $NATIVE, $virtualMethod(GSSLibStub, displayName, $ObjectArray*, int64_t), "org.ietf.jgss.GSSException"},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(GSSLibStub, equals, bool, Object$*)},
		{"exportContext", "(J)[B", nullptr, $NATIVE, $virtualMethod(GSSLibStub, exportContext, $bytes*, int64_t)},
		{"exportName", "(J)[B", nullptr, $NATIVE, $virtualMethod(GSSLibStub, exportName, $bytes*, int64_t), "org.ietf.jgss.GSSException"},
		{"getContextMech", "(J)Lorg/ietf/jgss/Oid;", nullptr, $NATIVE, $virtualMethod(GSSLibStub, getContextMech, $Oid*, int64_t)},
		{"getContextName", "(JZ)J", nullptr, $NATIVE, $virtualMethod(GSSLibStub, getContextName, int64_t, int64_t, bool)},
		{"getContextTime", "(J)I", nullptr, $NATIVE, $virtualMethod(GSSLibStub, getContextTime, int32_t, int64_t)},
		{"getCredName", "(J)J", nullptr, $NATIVE, $virtualMethod(GSSLibStub, getCredName, int64_t, int64_t)},
		{"getCredTime", "(J)I", nullptr, $NATIVE, $virtualMethod(GSSLibStub, getCredTime, int32_t, int64_t)},
		{"getCredUsage", "(J)I", nullptr, $NATIVE, $virtualMethod(GSSLibStub, getCredUsage, int32_t, int64_t)},
		{"getInstance", "(Lorg/ietf/jgss/Oid;)Lsun/security/jgss/wrapper/GSSLibStub;", nullptr, $STATIC, $staticMethod(GSSLibStub, getInstance, GSSLibStub*, $Oid*), "org.ietf.jgss.GSSException"},
		{"getMech", "()Lorg/ietf/jgss/Oid;", nullptr, 0, $virtualMethod(GSSLibStub, getMech, $Oid*)},
		{"getMechPtr", "([B)J", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(GSSLibStub, getMechPtr, int64_t, $bytes*)},
		{"getMic", "(JI[B)[B", nullptr, $NATIVE, $virtualMethod(GSSLibStub, getMic, $bytes*, int64_t, int32_t, $bytes*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(GSSLibStub, hashCode, int32_t)},
		{"importContext", "([B)Lsun/security/jgss/wrapper/NativeGSSContext;", nullptr, $NATIVE, $virtualMethod(GSSLibStub, importContext, $NativeGSSContext*, $bytes*)},
		{"importName", "([BLorg/ietf/jgss/Oid;)J", nullptr, $NATIVE, $virtualMethod(GSSLibStub, importName, int64_t, $bytes*, $Oid*)},
		{"indicateMechs", "()[Lorg/ietf/jgss/Oid;", nullptr, $STATIC | $NATIVE, $staticMethod(GSSLibStub, indicateMechs, $OidArray*)},
		{"init", "(Ljava/lang/String;Z)Z", nullptr, $STATIC | $NATIVE, $staticMethod(GSSLibStub, init, bool, $String*, bool)},
		{"initContext", "(JJLorg/ietf/jgss/ChannelBinding;[BLsun/security/jgss/wrapper/NativeGSSContext;)[B", nullptr, $NATIVE, $virtualMethod(GSSLibStub, initContext, $bytes*, int64_t, int64_t, $ChannelBinding*, $bytes*, $NativeGSSContext*)},
		{"inquireContext", "(J)[J", nullptr, $NATIVE, $virtualMethod(GSSLibStub, inquireContext, $longs*, int64_t)},
		{"inquireNamesForMech", "()[Lorg/ietf/jgss/Oid;", nullptr, $NATIVE, $virtualMethod(GSSLibStub, inquireNamesForMech, $OidArray*), "org.ietf.jgss.GSSException"},
		{"releaseCred", "(J)J", nullptr, $NATIVE, $virtualMethod(GSSLibStub, releaseCred, int64_t, int64_t)},
		{"releaseName", "(J)V", nullptr, $NATIVE, $virtualMethod(GSSLibStub, releaseName, void, int64_t)},
		{"unwrap", "(J[BLorg/ietf/jgss/MessageProp;)[B", nullptr, $NATIVE, $virtualMethod(GSSLibStub, unwrap, $bytes*, int64_t, $bytes*, $MessageProp*)},
		{"verifyMic", "(J[B[BLorg/ietf/jgss/MessageProp;)V", nullptr, $NATIVE, $virtualMethod(GSSLibStub, verifyMic, void, int64_t, $bytes*, $bytes*, $MessageProp*)},
		{"wrap", "(J[BLorg/ietf/jgss/MessageProp;)[B", nullptr, $NATIVE, $virtualMethod(GSSLibStub, wrap, $bytes*, int64_t, $bytes*, $MessageProp*)},
		{"wrapSizeLimit", "(JIII)I", nullptr, $NATIVE, $virtualMethod(GSSLibStub, wrapSizeLimit, int32_t, int64_t, int32_t, int32_t, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.jgss.wrapper.GSSLibStub",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(GSSLibStub, name, initialize, &classInfo$$, GSSLibStub::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(GSSLibStub);
	});
	return class$;
}

$Class* GSSLibStub::class$ = nullptr;

			} // wrapper
		} // jgss
	} // security
} // sun