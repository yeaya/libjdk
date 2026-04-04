#include <sun/security/krb5/KrbKdcRep.h>
#include <sun/security/krb5/Checksum.h>
#include <sun/security/krb5/EncryptionKey.h>
#include <sun/security/krb5/PrincipalName.h>
#include <sun/security/krb5/internal/EncKDCRepPart.h>
#include <sun/security/krb5/internal/HostAddresses.h>
#include <sun/security/krb5/internal/KDCOptions.h>
#include <sun/security/krb5/internal/KDCRep.h>
#include <sun/security/krb5/internal/KDCReq.h>
#include <sun/security/krb5/internal/KDCReqBody.h>
#include <sun/security/krb5/internal/KerberosTime.h>
#include <sun/security/krb5/internal/Krb5.h>
#include <sun/security/krb5/internal/KrbApErrException.h>
#include <sun/security/krb5/internal/PAData.h>
#include <sun/security/krb5/internal/TicketFlags.h>
#include <sun/security/krb5/internal/crypto/KeyUsage.h>
#include <sun/security/util/DerInputStream.h>
#include <sun/security/util/DerValue.h>
#include <jcpp.h>

#undef CANONICALIZE
#undef DEBUG
#undef KRB_AP_ERR_MODIFIED
#undef KRB_AP_ERR_SKEW
#undef KRB_NT_ENTERPRISE
#undef KU_AS_REQ
#undef PA_REQ_ENC_PA_REP
#undef RENEWABLE
#undef TGS_DEFAULT_SRV_NAME
#undef TKT_OPTS_ENC_PA_REP

using $PADataArray = $Array<::sun::security::krb5::internal::PAData>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $Checksum = ::sun::security::krb5::Checksum;
using $EncryptionKey = ::sun::security::krb5::EncryptionKey;
using $PrincipalName = ::sun::security::krb5::PrincipalName;
using $KDCOptions = ::sun::security::krb5::internal::KDCOptions;
using $KDCRep = ::sun::security::krb5::internal::KDCRep;
using $KDCReq = ::sun::security::krb5::internal::KDCReq;
using $Krb5 = ::sun::security::krb5::internal::Krb5;
using $KrbApErrException = ::sun::security::krb5::internal::KrbApErrException;
using $PAData = ::sun::security::krb5::internal::PAData;
using $KeyUsage = ::sun::security::krb5::internal::crypto::KeyUsage;
using $DerInputStream = ::sun::security::util::DerInputStream;

namespace sun {
	namespace security {
		namespace krb5 {

void KrbKdcRep::init$() {
}

void KrbKdcRep::check(bool isAsReq, $KDCReq* req, $KDCRep* rep, $EncryptionKey* replyKey) {
	$useLocalObjectStack();
	bool var$0 = isAsReq && !$nc($nc($nc(req)->reqBody)->cname)->equals($nc(rep)->cname);
	if (var$0) {
		bool var$2 = !$nc(req->reqBody->kdcOptions)->get($KDCOptions::CANONICALIZE);
		bool var$1 = var$2 && req->reqBody->cname->getNameType() != $PrincipalName::KRB_NT_ENTERPRISE;
		var$0 = var$1 || !$nc($nc(rep->encKDCRepPart)->flags)->get($Krb5::TKT_OPTS_ENC_PA_REP);
	}
	if (var$0) {
		$nc($nc($nc(rep)->encKDCRepPart)->key)->destroy();
		$throwNew($KrbApErrException, $Krb5::KRB_AP_ERR_MODIFIED);
	}
	if (!$nc($nc($nc(req)->reqBody)->sname)->equals($nc($nc(rep)->encKDCRepPart)->sname)) {
		$var($StringArray, snameStrings, $nc($nc(rep->encKDCRepPart)->sname)->getNameStrings());
		bool var$4 = isAsReq || !$nc($nc(req->reqBody)->kdcOptions)->get($KDCOptions::CANONICALIZE) || snameStrings == nullptr || snameStrings->length != 2;
		bool var$3 = var$4 || !$nc(snameStrings->get(0))->equals($PrincipalName::TGS_DEFAULT_SRV_NAME);
		if (var$3 || !$$nc($nc($nc(rep->encKDCRepPart)->sname)->getRealmString())->equals($($nc($nc(req->reqBody)->sname)->getRealmString()))) {
			$nc($nc(rep->encKDCRepPart)->key)->destroy();
			$throwNew($KrbApErrException, $Krb5::KRB_AP_ERR_MODIFIED);
		}
	}
	if ($nc(req->reqBody)->getNonce() != $nc(rep->encKDCRepPart)->nonce) {
		$nc($nc(rep->encKDCRepPart)->key)->destroy();
		$throwNew($KrbApErrException, $Krb5::KRB_AP_ERR_MODIFIED);
	}
	if (($nc(req->reqBody)->addresses != nullptr && $nc(rep->encKDCRepPart)->caddr != nullptr) && !req->reqBody->addresses->equals(rep->encKDCRepPart->caddr)) {
		$nc($nc(rep->encKDCRepPart)->key)->destroy();
		$throwNew($KrbApErrException, $Krb5::KRB_AP_ERR_MODIFIED);
	}
	for (int32_t i = 2; i < 6; ++i) {
		bool var$5 = $nc($nc(req->reqBody)->kdcOptions)->get(i);
		if (var$5 != $nc($nc(rep->encKDCRepPart)->flags)->get(i)) {
			$init($Krb5);
			if ($Krb5::DEBUG) {
				$var($StringBuilder, var$6, $new($StringBuilder));
				var$6->append("> KrbKdcRep.check: at #"_s);
				var$6->append(i);
				var$6->append(". request for "_s);
				var$6->append($nc($nc(req->reqBody)->kdcOptions)->get(i));
				var$6->append(", received "_s);
				var$6->append($nc($nc(rep->encKDCRepPart)->flags)->get(i));
				$nc($System::out)->println($$str(var$6));
			}
			$throwNew($KrbApErrException, $Krb5::KRB_AP_ERR_MODIFIED);
		}
	}
	bool var$7 = $nc($nc(req->reqBody)->kdcOptions)->get($KDCOptions::RENEWABLE);
	if (var$7 && !$nc($nc(rep->encKDCRepPart)->flags)->get($KDCOptions::RENEWABLE)) {
		$throwNew($KrbApErrException, $Krb5::KRB_AP_ERR_MODIFIED);
	}
	if (($nc(req->reqBody)->from == nullptr) || req->reqBody->from->isZero()) {
		if (($nc(rep->encKDCRepPart)->starttime != nullptr) && !rep->encKDCRepPart->starttime->inClockSkew()) {
			$nc($nc(rep->encKDCRepPart)->key)->destroy();
			$throwNew($KrbApErrException, $Krb5::KRB_AP_ERR_SKEW);
		}
	}
	if (($nc(req->reqBody)->from != nullptr) && !req->reqBody->from->isZero()) {
		if (($nc(rep->encKDCRepPart)->starttime != nullptr) && !$nc(req->reqBody)->from->equals(rep->encKDCRepPart->starttime)) {
			$nc($nc(rep->encKDCRepPart)->key)->destroy();
			$throwNew($KrbApErrException, $Krb5::KRB_AP_ERR_MODIFIED);
		}
	}
	bool var$8 = !$nc($nc(req->reqBody)->till)->isZero();
	if (var$8 && $nc($nc(rep->encKDCRepPart)->endtime)->greaterThan(req->reqBody->till)) {
		$nc($nc(rep->encKDCRepPart)->key)->destroy();
		$throwNew($KrbApErrException, $Krb5::KRB_AP_ERR_MODIFIED);
	}
	if ($nc($nc(req->reqBody)->kdcOptions)->get($KDCOptions::RENEWABLE)) {
		if ($nc(req->reqBody)->rtime != nullptr && !req->reqBody->rtime->isZero()) {
			if (($nc(rep->encKDCRepPart)->renewTill == nullptr) || rep->encKDCRepPart->renewTill->greaterThan($nc(req->reqBody)->rtime)) {
				$nc($nc(rep->encKDCRepPart)->key)->destroy();
				$throwNew($KrbApErrException, $Krb5::KRB_AP_ERR_MODIFIED);
			}
		}
	}
	if ($nc($nc(rep->encKDCRepPart)->flags)->get($Krb5::TKT_OPTS_ENC_PA_REP)) {
		bool reqPaReqEncPaRep = false;
		bool repPaReqEncPaRepValid = false;
		if (req->pAData != nullptr) {
			$var($PADataArray, arr$, req->pAData);
			for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
				$var($PAData, pa, arr$->get(i$));
				if ($nc(pa)->getType() == $Krb5::PA_REQ_ENC_PA_REP) {
					reqPaReqEncPaRep = true;
					break;
				}
			}
		}
		if ($nc(rep->encKDCRepPart)->pAData != nullptr) {
			$var($PADataArray, arr$, rep->encKDCRepPart->pAData);
			for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
				$var($PAData, pa, arr$->get(i$));
				if ($nc(pa)->getType() == $Krb5::PA_REQ_ENC_PA_REP) {
					try {
						$var($Checksum, repCksum, $new($Checksum, $($$new($DerInputStream, $(pa->getValue()))->getDerValue())));
						repPaReqEncPaRepValid = repCksum->verifyAnyChecksum($(req->asn1Encode()), replyKey, $KeyUsage::KU_AS_REQ);
					} catch ($Exception& e) {
						$init($Krb5);
						if ($Krb5::DEBUG) {
							e->printStackTrace();
						}
					}
					break;
				}
			}
		}
		if (reqPaReqEncPaRep && !repPaReqEncPaRepValid) {
			$throwNew($KrbApErrException, $Krb5::KRB_AP_ERR_MODIFIED);
		}
	}
}

KrbKdcRep::KrbKdcRep() {
}

$Class* KrbKdcRep::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(KrbKdcRep, init$, void)},
		{"check", "(ZLsun/security/krb5/internal/KDCReq;Lsun/security/krb5/internal/KDCRep;Lsun/security/krb5/EncryptionKey;)V", nullptr, $STATIC, $staticMethod(KrbKdcRep, check, void, bool, $KDCReq*, $KDCRep*, $EncryptionKey*), "sun.security.krb5.internal.KrbApErrException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"sun.security.krb5.KrbKdcRep",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(KrbKdcRep, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(KrbKdcRep);
	});
	return class$;
}

$Class* KrbKdcRep::class$ = nullptr;

		} // krb5
	} // security
} // sun