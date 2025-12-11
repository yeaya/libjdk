#include <sun/security/krb5/KrbAsRep.h>

#include <java/util/Objects.h>
#include <javax/security/auth/kerberos/KeyTab.h>
#include <sun/security/jgss/krb5/Krb5Util.h>
#include <sun/security/krb5/Asn1Exception.h>
#include <sun/security/krb5/Credentials.h>
#include <sun/security/krb5/EncryptedData.h>
#include <sun/security/krb5/EncryptionKey.h>
#include <sun/security/krb5/KrbAsReq.h>
#include <sun/security/krb5/KrbException.h>
#include <sun/security/krb5/KrbKdcRep.h>
#include <sun/security/krb5/PrincipalName.h>
#include <sun/security/krb5/internal/ASRep.h>
#include <sun/security/krb5/internal/ASReq.h>
#include <sun/security/krb5/internal/EncASRepPart.h>
#include <sun/security/krb5/internal/EncKDCRepPart.h>
#include <sun/security/krb5/internal/HostAddresses.h>
#include <sun/security/krb5/internal/KDCRep.h>
#include <sun/security/krb5/internal/KDCReq.h>
#include <sun/security/krb5/internal/KDCReqBody.h>
#include <sun/security/krb5/internal/KRBError.h>
#include <sun/security/krb5/internal/KerberosTime.h>
#include <sun/security/krb5/internal/Krb5.h>
#include <sun/security/krb5/internal/PAData$SaltAndParams.h>
#include <sun/security/krb5/internal/PAData.h>
#include <sun/security/krb5/internal/Ticket.h>
#include <sun/security/krb5/internal/TicketFlags.h>
#include <sun/security/krb5/internal/ccache/Credentials.h>
#include <sun/security/krb5/internal/crypto/EType.h>
#include <sun/security/krb5/internal/crypto/KeyUsage.h>
#include <sun/security/util/DerValue.h>
#include <jcpp.h>

#undef API_INVALID_ARG
#undef DEBUG
#undef KRB_AP_ERR_BADKEYVER
#undef KU_ENC_AS_REP_PART

using $PADataArray = $Array<::sun::security::krb5::internal::PAData>;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Objects = ::java::util::Objects;
using $KeyTab = ::javax::security::auth::kerberos::KeyTab;
using $Krb5Util = ::sun::security::jgss::krb5::Krb5Util;
using $Asn1Exception = ::sun::security::krb5::Asn1Exception;
using $Credentials = ::sun::security::krb5::Credentials;
using $EncryptedData = ::sun::security::krb5::EncryptedData;
using $EncryptionKey = ::sun::security::krb5::EncryptionKey;
using $KrbAsReq = ::sun::security::krb5::KrbAsReq;
using $KrbException = ::sun::security::krb5::KrbException;
using $KrbKdcRep = ::sun::security::krb5::KrbKdcRep;
using $PrincipalName = ::sun::security::krb5::PrincipalName;
using $ASRep = ::sun::security::krb5::internal::ASRep;
using $ASReq = ::sun::security::krb5::internal::ASReq;
using $EncASRepPart = ::sun::security::krb5::internal::EncASRepPart;
using $EncKDCRepPart = ::sun::security::krb5::internal::EncKDCRepPart;
using $KDCRep = ::sun::security::krb5::internal::KDCRep;
using $KDCReq = ::sun::security::krb5::internal::KDCReq;
using $KRBError = ::sun::security::krb5::internal::KRBError;
using $Krb5 = ::sun::security::krb5::internal::Krb5;
using $PAData = ::sun::security::krb5::internal::PAData;
using $1Credentials = ::sun::security::krb5::internal::ccache::Credentials;
using $EType = ::sun::security::krb5::internal::crypto::EType;
using $KeyUsage = ::sun::security::krb5::internal::crypto::KeyUsage;
using $DerValue = ::sun::security::util::DerValue;

namespace sun {
	namespace security {
		namespace krb5 {

$FieldInfo _KrbAsRep_FieldInfo_[] = {
	{"rep", "Lsun/security/krb5/internal/ASRep;", nullptr, $PRIVATE, $field(KrbAsRep, rep)},
	{"creds", "Lsun/security/krb5/Credentials;", nullptr, $PRIVATE, $field(KrbAsRep, creds)},
	{"DEBUG", "Z", nullptr, $PRIVATE, $field(KrbAsRep, DEBUG)},
	{}
};

$MethodInfo _KrbAsRep_MethodInfo_[] = {
	{"<init>", "([B)V", nullptr, 0, $method(static_cast<void(KrbAsRep::*)($bytes*)>(&KrbAsRep::init$)), "sun.security.krb5.KrbException,sun.security.krb5.Asn1Exception,java.io.IOException"},
	{"decrypt", "(Lsun/security/krb5/EncryptionKey;Lsun/security/krb5/KrbAsReq;Lsun/security/krb5/PrincipalName;)V", nullptr, $PRIVATE, $method(static_cast<void(KrbAsRep::*)($EncryptionKey*,$KrbAsReq*,$PrincipalName*)>(&KrbAsRep::decrypt)), "sun.security.krb5.KrbException,sun.security.krb5.Asn1Exception,java.io.IOException"},
	{"decryptUsingKeyTab", "(Ljavax/security/auth/kerberos/KeyTab;Lsun/security/krb5/KrbAsReq;Lsun/security/krb5/PrincipalName;)V", nullptr, 0, nullptr, "sun.security.krb5.KrbException,sun.security.krb5.Asn1Exception,java.io.IOException"},
	{"decryptUsingPassword", "([CLsun/security/krb5/KrbAsReq;Lsun/security/krb5/PrincipalName;)V", nullptr, 0, nullptr, "sun.security.krb5.KrbException,sun.security.krb5.Asn1Exception,java.io.IOException"},
	{"getCCreds", "()Lsun/security/krb5/internal/ccache/Credentials;", nullptr, 0},
	{"getCreds", "()Lsun/security/krb5/Credentials;", nullptr, 0},
	{"getPA", "()[Lsun/security/krb5/internal/PAData;", nullptr, 0},
	{}
};

$ClassInfo _KrbAsRep_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.krb5.KrbAsRep",
	"sun.security.krb5.KrbKdcRep",
	nullptr,
	_KrbAsRep_FieldInfo_,
	_KrbAsRep_MethodInfo_
};

$Object* allocate$KrbAsRep($Class* clazz) {
	return $of($alloc(KrbAsRep));
}

void KrbAsRep::init$($bytes* ibuf) {
	$useLocalCurrentObjectStackCache();
	$KrbKdcRep::init$();
	$init($Krb5);
	this->DEBUG = $Krb5::DEBUG;
	$var($DerValue, encoding, $new($DerValue, ibuf));
	try {
		$set(this, rep, $new($ASRep, encoding));
	} catch ($Asn1Exception& e) {
		$set(this, rep, nullptr);
		$var($KRBError, err, $new($KRBError, encoding));
		$var($String, errStr, err->getErrorString());
		$var($String, eText, nullptr);
		if (errStr != nullptr && errStr->length() > 0) {
			if (errStr->charAt(errStr->length() - 1) == 0) {
				$assign(eText, errStr->substring(0, errStr->length() - 1));
			} else {
				$assign(eText, errStr);
			}
		}
		$var($KrbException, ke, nullptr);
		if (eText == nullptr) {
			$assign(ke, $new($KrbException, err));
		} else {
			if (this->DEBUG) {
				$nc($System::out)->println($$str({"KRBError received: "_s, eText}));
			}
			$assign(ke, $new($KrbException, err, eText));
		}
		$nc(ke)->initCause(e);
		$throw(ke);
	}
}

$PADataArray* KrbAsRep::getPA() {
	return $nc(this->rep)->pAData;
}

void KrbAsRep::decryptUsingKeyTab($KeyTab* ktab, $KrbAsReq* asReq, $PrincipalName* cname) {
	$useLocalCurrentObjectStackCache();
	$var($EncryptionKey, dkey, nullptr);
	int32_t encPartKeyType = $nc($nc(this->rep)->encPart)->getEType();
	$var($Integer, encPartKvno, $nc($nc(this->rep)->encPart)->kvno);
	try {
		$assign(dkey, $EncryptionKey::findKey(encPartKeyType, encPartKvno, $($Krb5Util::keysFromJavaxKeyTab(ktab, cname))));
	} catch ($KrbException& ke) {
		if (ke->returnCode() == $Krb5::KRB_AP_ERR_BADKEYVER) {
			$assign(dkey, $EncryptionKey::findKey(encPartKeyType, $($Krb5Util::keysFromJavaxKeyTab(ktab, cname))));
		}
	}
	if (dkey == nullptr) {
		$throwNew($KrbException, $Krb5::API_INVALID_ARG, $$str({"Cannot find key for type/kvno to decrypt AS REP - "_s, $($EType::toString(encPartKeyType)), "/"_s, encPartKvno}));
	}
	decrypt(dkey, asReq, cname);
}

void KrbAsRep::decryptUsingPassword($chars* password, $KrbAsReq* asReq, $PrincipalName* cname) {
	$useLocalCurrentObjectStackCache();
	int32_t encPartKeyType = $nc($nc(this->rep)->encPart)->getEType();
	$var($EncryptionKey, dkey, $EncryptionKey::acquireSecretKey(cname, password, encPartKeyType, $($PAData::getSaltAndParams(encPartKeyType, $nc(this->rep)->pAData))));
	decrypt(dkey, asReq, cname);
}

void KrbAsRep::decrypt($EncryptionKey* dkey, $KrbAsReq* asReq, $PrincipalName* cname) {
	$useLocalCurrentObjectStackCache();
	$var($bytes, enc_as_rep_bytes, $nc($nc(this->rep)->encPart)->decrypt(dkey, $KeyUsage::KU_ENC_AS_REP_PART));
	$var($bytes, enc_as_rep_part, $nc($nc(this->rep)->encPart)->reset(enc_as_rep_bytes));
	$var($DerValue, encoding, $new($DerValue, enc_as_rep_part));
	$var($EncASRepPart, enc_part, $new($EncASRepPart, encoding));
	$set($nc(this->rep), encKDCRepPart, enc_part);
	$var($ASReq, req, $nc(asReq)->getMessage());
	check(true, req, this->rep, dkey);
	$var($PrincipalName, clientAlias, cname);
	if ($nc(clientAlias)->equals($nc(this->rep)->cname)) {
		$assign(clientAlias, nullptr);
	}
	$set(this, creds, $new($Credentials, $nc(this->rep)->ticket, $nc(this->rep)->cname, clientAlias, enc_part->sname, nullptr, enc_part->key, enc_part->flags, enc_part->authtime, enc_part->starttime, enc_part->endtime, enc_part->renewTill, enc_part->caddr));
	if (this->DEBUG) {
		$nc($System::out)->println($$str({">>> KrbAsRep cons in KrbAsReq.getReply "_s, $($nc($nc($nc(req)->reqBody)->cname)->getNameString())}));
	}
}

$Credentials* KrbAsRep::getCreds() {
	return $cast($Credentials, $Objects::requireNonNull($of(this->creds), "Creds not available yet."_s));
}

$1Credentials* KrbAsRep::getCCreds() {
	return $new($1Credentials, this->rep);
}

KrbAsRep::KrbAsRep() {
}

$Class* KrbAsRep::load$($String* name, bool initialize) {
	$loadClass(KrbAsRep, name, initialize, &_KrbAsRep_ClassInfo_, allocate$KrbAsRep);
	return class$;
}

$Class* KrbAsRep::class$ = nullptr;

		} // krb5
	} // security
} // sun