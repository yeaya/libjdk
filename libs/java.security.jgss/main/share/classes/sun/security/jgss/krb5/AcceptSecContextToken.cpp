#include <sun/security/jgss/krb5/AcceptSecContextToken.h>

#include <java/io/InputStream.h>
#include <org/ietf/jgss/GSSException.h>
#include <sun/security/action/GetBooleanAction.h>
#include <sun/security/jgss/krb5/InitialToken.h>
#include <sun/security/jgss/krb5/Krb5Context.h>
#include <sun/security/jgss/krb5/Krb5Token.h>
#include <sun/security/krb5/Credentials.h>
#include <sun/security/krb5/EncryptionKey.h>
#include <sun/security/krb5/KrbApRep.h>
#include <sun/security/krb5/KrbApReq.h>
#include <sun/security/util/DerValue.h>
#include <jcpp.h>

#undef ACCEPTOR_SUBKEY
#undef AP_REP_ID
#undef DEFECTIVE_TOKEN

using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $GSSException = ::org::ietf::jgss::GSSException;
using $GetBooleanAction = ::sun::security::action::GetBooleanAction;
using $InitialToken = ::sun::security::jgss::krb5::InitialToken;
using $Krb5Context = ::sun::security::jgss::krb5::Krb5Context;
using $Krb5Token = ::sun::security::jgss::krb5::Krb5Token;
using $Credentials = ::sun::security::krb5::Credentials;
using $EncryptionKey = ::sun::security::krb5::EncryptionKey;
using $KrbApRep = ::sun::security::krb5::KrbApRep;
using $KrbApReq = ::sun::security::krb5::KrbApReq;
using $DerValue = ::sun::security::util::DerValue;

namespace sun {
	namespace security {
		namespace jgss {
			namespace krb5 {

$FieldInfo _AcceptSecContextToken_FieldInfo_[] = {
	{"apRep", "Lsun/security/krb5/KrbApRep;", nullptr, $PRIVATE, $field(AcceptSecContextToken, apRep)},
	{}
};

$MethodInfo _AcceptSecContextToken_MethodInfo_[] = {
	{"<init>", "(Lsun/security/jgss/krb5/Krb5Context;Lsun/security/krb5/KrbApReq;)V", nullptr, $PUBLIC, $method(AcceptSecContextToken, init$, void, $Krb5Context*, $KrbApReq*), "sun.security.krb5.KrbException,java.io.IOException,org.ietf.jgss.GSSException"},
	{"<init>", "(Lsun/security/jgss/krb5/Krb5Context;Lsun/security/krb5/Credentials;Lsun/security/krb5/KrbApReq;Ljava/io/InputStream;)V", nullptr, $PUBLIC, $method(AcceptSecContextToken, init$, void, $Krb5Context*, $Credentials*, $KrbApReq*, $InputStream*), "java.io.IOException,org.ietf.jgss.GSSException,sun.security.krb5.KrbException"},
	{"encode", "()[B", nullptr, $PUBLIC | $FINAL, $virtualMethod(AcceptSecContextToken, encode, $bytes*), "java.io.IOException"},
	{}
};

$ClassInfo _AcceptSecContextToken_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.jgss.krb5.AcceptSecContextToken",
	"sun.security.jgss.krb5.InitialToken",
	nullptr,
	_AcceptSecContextToken_FieldInfo_,
	_AcceptSecContextToken_MethodInfo_
};

$Object* allocate$AcceptSecContextToken($Class* clazz) {
	return $of($alloc(AcceptSecContextToken));
}

void AcceptSecContextToken::init$($Krb5Context* context, $KrbApReq* apReq) {
	$useLocalCurrentObjectStackCache();
	$InitialToken::init$();
	$set(this, apRep, nullptr);
	bool useSubkey = $GetBooleanAction::privilegedGetProperty("sun.security.krb5.acceptor.subkey"_s);
	bool useSequenceNumber = true;
	$var($EncryptionKey, subKey, nullptr);
	if (useSubkey) {
		$assign(subKey, $new($EncryptionKey, $($nc($($nc(apReq)->getCreds()))->getSessionKey())));
		$nc(context)->setKey($Krb5Context::ACCEPTOR_SUBKEY, subKey);
	}
	$set(this, apRep, $new($KrbApRep, apReq, useSequenceNumber, subKey));
	$nc(context)->resetMySequenceNumber($nc($($nc(this->apRep)->getSeqNumber()))->intValue());
}

void AcceptSecContextToken::init$($Krb5Context* context, $Credentials* serviceCreds, $KrbApReq* apReq, $InputStream* is) {
	$useLocalCurrentObjectStackCache();
	$InitialToken::init$();
	$set(this, apRep, nullptr);
	int32_t var$0 = ($nc(is)->read() << 8);
	int32_t tokenId = (var$0 | is->read());
	if (tokenId != $Krb5Token::AP_REP_ID) {
		$throwNew($GSSException, $GSSException::DEFECTIVE_TOKEN, -1, "AP_REP token id does not match!"_s);
	}
	$var($bytes, apRepBytes, $$new($DerValue, is)->toByteArray());
	$var($KrbApRep, apRep, $new($KrbApRep, apRepBytes, serviceCreds, apReq));
	$var($EncryptionKey, subKey, apRep->getSubKey());
	if (subKey != nullptr) {
		$nc(context)->setKey($Krb5Context::ACCEPTOR_SUBKEY, subKey);
	}
	$var($Integer, apRepSeqNumber, apRep->getSeqNumber());
	int32_t peerSeqNumber = (apRepSeqNumber != nullptr ? $nc(apRepSeqNumber)->intValue() : 0);
	$nc(context)->resetPeerSequenceNumber(peerSeqNumber);
}

$bytes* AcceptSecContextToken::encode() {
	$useLocalCurrentObjectStackCache();
	$var($bytes, apRepBytes, $nc(this->apRep)->getMessage());
	$var($bytes, retVal, $new($bytes, 2 + $nc(apRepBytes)->length));
	writeInt($Krb5Token::AP_REP_ID, retVal, 0);
	$System::arraycopy(apRepBytes, 0, retVal, 2, apRepBytes->length);
	return retVal;
}

AcceptSecContextToken::AcceptSecContextToken() {
}

$Class* AcceptSecContextToken::load$($String* name, bool initialize) {
	$loadClass(AcceptSecContextToken, name, initialize, &_AcceptSecContextToken_ClassInfo_, allocate$AcceptSecContextToken);
	return class$;
}

$Class* AcceptSecContextToken::class$ = nullptr;

			} // krb5
		} // jgss
	} // security
} // sun