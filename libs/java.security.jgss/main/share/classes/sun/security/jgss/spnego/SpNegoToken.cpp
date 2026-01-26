#include <sun/security/jgss/spnego/SpNegoToken.h>

#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <org/ietf/jgss/GSSException.h>
#include <org/ietf/jgss/Oid.h>
#include <sun/security/jgss/GSSToken.h>
#include <sun/security/jgss/spnego/SpNegoContext.h>
#include <sun/security/jgss/spnego/SpNegoMechFactory.h>
#include <sun/security/jgss/spnego/SpNegoToken$NegoResult.h>
#include <sun/security/util/DerOutputStream.h>
#include <sun/security/util/DerValue.h>
#include <sun/security/util/ObjectIdentifier.h>
#include <jcpp.h>

#undef ACCEPT_COMPLETE
#undef ACCEPT_INCOMPLETE
#undef DEBUG
#undef DEFECTIVE_TOKEN
#undef GSS_SPNEGO_MECH_OID
#undef NEG_TOKEN_INIT_ID
#undef NEG_TOKEN_TARG_ID
#undef OID
#undef REJECT
#undef TAG_CONTEXT

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GSSException = ::org::ietf::jgss::GSSException;
using $Oid = ::org::ietf::jgss::Oid;
using $GSSToken = ::sun::security::jgss::GSSToken;
using $SpNegoContext = ::sun::security::jgss::spnego::SpNegoContext;
using $SpNegoMechFactory = ::sun::security::jgss::spnego::SpNegoMechFactory;
using $SpNegoToken$NegoResult = ::sun::security::jgss::spnego::SpNegoToken$NegoResult;
using $DerOutputStream = ::sun::security::util::DerOutputStream;
using $DerValue = ::sun::security::util::DerValue;
using $ObjectIdentifier = ::sun::security::util::ObjectIdentifier;

namespace sun {
	namespace security {
		namespace jgss {
			namespace spnego {

$FieldInfo _SpNegoToken_FieldInfo_[] = {
	{"NEG_TOKEN_INIT_ID", "I", nullptr, $STATIC | $FINAL, $constField(SpNegoToken, NEG_TOKEN_INIT_ID)},
	{"NEG_TOKEN_TARG_ID", "I", nullptr, $STATIC | $FINAL, $constField(SpNegoToken, NEG_TOKEN_TARG_ID)},
	{"tokenType", "I", nullptr, $PRIVATE, $field(SpNegoToken, tokenType)},
	{"DEBUG", "Z", nullptr, $STATIC | $FINAL, $staticField(SpNegoToken, DEBUG)},
	{"OID", "Lsun/security/util/ObjectIdentifier;", nullptr, $PUBLIC | $STATIC, $staticField(SpNegoToken, OID)},
	{}
};

$MethodInfo _SpNegoToken_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PROTECTED, $method(SpNegoToken, init$, void, int32_t)},
	{"checkNextField", "(II)I", nullptr, $STATIC, $staticMethod(SpNegoToken, checkNextField, int32_t, int32_t, int32_t), "org.ietf.jgss.GSSException"},
	{"encode", "()[B", nullptr, $ABSTRACT, $virtualMethod(SpNegoToken, encode, $bytes*), "org.ietf.jgss.GSSException"},
	{"getEncoded", "()[B", nullptr, 0, $virtualMethod(SpNegoToken, getEncoded, $bytes*), "java.io.IOException,org.ietf.jgss.GSSException"},
	{"getNegoResultString", "(I)Ljava/lang/String;", nullptr, $STATIC, $staticMethod(SpNegoToken, getNegoResultString, $String*, int32_t)},
	{"getNegoResultType", "(I)Lsun/security/jgss/spnego/SpNegoToken$NegoResult;", nullptr, $STATIC, $staticMethod(SpNegoToken, getNegoResultType, $SpNegoToken$NegoResult*, int32_t)},
	{"getTokenName", "(I)Ljava/lang/String;", nullptr, $STATIC, $staticMethod(SpNegoToken, getTokenName, $String*, int32_t)},
	{"getType", "()I", nullptr, $FINAL, $method(SpNegoToken, getType, int32_t)},
	{}
};

$InnerClassInfo _SpNegoToken_InnerClassesInfo_[] = {
	{"sun.security.jgss.spnego.SpNegoToken$NegoResult", "sun.security.jgss.spnego.SpNegoToken", "NegoResult", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _SpNegoToken_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"sun.security.jgss.spnego.SpNegoToken",
	"sun.security.jgss.GSSToken",
	nullptr,
	_SpNegoToken_FieldInfo_,
	_SpNegoToken_MethodInfo_,
	nullptr,
	nullptr,
	_SpNegoToken_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.security.jgss.spnego.SpNegoToken$NegoResult"
};

$Object* allocate$SpNegoToken($Class* clazz) {
	return $of($alloc(SpNegoToken));
}

bool SpNegoToken::DEBUG = false;
$ObjectIdentifier* SpNegoToken::OID = nullptr;

void SpNegoToken::init$(int32_t tokenType) {
	$GSSToken::init$();
	this->tokenType = tokenType;
}

$bytes* SpNegoToken::getEncoded() {
	$useLocalCurrentObjectStackCache();
	$var($DerOutputStream, token, $new($DerOutputStream));
	token->write($(encode()));
	{
		$var($DerOutputStream, initToken, nullptr)
		$var($DerOutputStream, targToken, nullptr)
		switch (this->tokenType) {
		case SpNegoToken::NEG_TOKEN_INIT_ID:
			{
				$assign(initToken, $new($DerOutputStream));
				$nc(initToken)->write($DerValue::createTag($DerValue::TAG_CONTEXT, true, (int8_t)SpNegoToken::NEG_TOKEN_INIT_ID), token);
				return $nc(initToken)->toByteArray();
			}
		case SpNegoToken::NEG_TOKEN_TARG_ID:
			{
				$assign(targToken, $new($DerOutputStream));
				$nc(targToken)->write($DerValue::createTag($DerValue::TAG_CONTEXT, true, (int8_t)SpNegoToken::NEG_TOKEN_TARG_ID), token);
				return $nc(targToken)->toByteArray();
			}
		default:
			{
				return token->toByteArray();
			}
		}
	}
}

int32_t SpNegoToken::getType() {
	return this->tokenType;
}

$String* SpNegoToken::getTokenName(int32_t type) {
	$init(SpNegoToken);
	switch (type) {
	case SpNegoToken::NEG_TOKEN_INIT_ID:
		{
			return "SPNEGO NegTokenInit"_s;
		}
	case SpNegoToken::NEG_TOKEN_TARG_ID:
		{
			return "SPNEGO NegTokenTarg"_s;
		}
	default:
		{
			return "SPNEGO Mechanism Token"_s;
		}
	}
}

$SpNegoToken$NegoResult* SpNegoToken::getNegoResultType(int32_t result) {
	$init(SpNegoToken);
	switch (result) {
	case 0:
		{
			$init($SpNegoToken$NegoResult);
			return $SpNegoToken$NegoResult::ACCEPT_COMPLETE;
		}
	case 1:
		{
			$init($SpNegoToken$NegoResult);
			return $SpNegoToken$NegoResult::ACCEPT_INCOMPLETE;
		}
	case 2:
		{
			$init($SpNegoToken$NegoResult);
			return $SpNegoToken$NegoResult::REJECT;
		}
	default:
		{
			$init($SpNegoToken$NegoResult);
			return $SpNegoToken$NegoResult::ACCEPT_COMPLETE;
		}
	}
}

$String* SpNegoToken::getNegoResultString(int32_t result) {
	$init(SpNegoToken);
	switch (result) {
	case 0:
		{
			return "Accept Complete"_s;
		}
	case 1:
		{
			return "Accept InComplete"_s;
		}
	case 2:
		{
			return "Reject"_s;
		}
	default:
		{
			return ($str({"Unknown Negotiated Result: "_s, $$str(result)}));
		}
	}
}

int32_t SpNegoToken::checkNextField(int32_t last, int32_t current) {
	$init(SpNegoToken);
	if (last < current) {
		return current;
	} else {
		$throwNew($GSSException, $GSSException::DEFECTIVE_TOKEN, -1, "Invalid SpNegoToken token : wrong order"_s);
	}
}

void clinit$SpNegoToken($Class* class$) {
	$init($SpNegoContext);
	SpNegoToken::DEBUG = $SpNegoContext::DEBUG;
	{
		try {
			$init($SpNegoMechFactory);
			$assignStatic(SpNegoToken::OID, $ObjectIdentifier::of($($nc($SpNegoMechFactory::GSS_SPNEGO_MECH_OID)->toString())));
		} catch ($IOException& ioe) {
		}
	}
}

SpNegoToken::SpNegoToken() {
}

$Class* SpNegoToken::load$($String* name, bool initialize) {
	$loadClass(SpNegoToken, name, initialize, &_SpNegoToken_ClassInfo_, clinit$SpNegoToken, allocate$SpNegoToken);
	return class$;
}

$Class* SpNegoToken::class$ = nullptr;

			} // spnego
		} // jgss
	} // security
} // sun