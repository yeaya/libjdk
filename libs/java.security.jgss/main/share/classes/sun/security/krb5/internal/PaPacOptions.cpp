#include <sun/security/krb5/internal/PaPacOptions.h>

#include <sun/security/krb5/Asn1Exception.h>
#include <sun/security/krb5/internal/KDCOptions.h>
#include <sun/security/krb5/internal/Krb5.h>
#include <sun/security/krb5/internal/util/KerberosFlags.h>
#include <sun/security/util/DerInputStream.h>
#include <sun/security/util/DerOutputStream.h>
#include <sun/security/util/DerValue.h>
#include <jcpp.h>

#undef AP_OPTS_MAX
#undef ASN1_BAD_ID
#undef BRANCH_AWARE
#undef CLAIMS
#undef FORWARD_TO_FULL_DC
#undef RESOURCE_BASED_CONSTRAINED_DELEGATION
#undef TAG_CONTEXT

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Asn1Exception = ::sun::security::krb5::Asn1Exception;
using $KDCOptions = ::sun::security::krb5::internal::KDCOptions;
using $Krb5 = ::sun::security::krb5::internal::Krb5;
using $KerberosFlags = ::sun::security::krb5::internal::util::KerberosFlags;
using $DerInputStream = ::sun::security::util::DerInputStream;
using $DerOutputStream = ::sun::security::util::DerOutputStream;
using $DerValue = ::sun::security::util::DerValue;

namespace sun {
	namespace security {
		namespace krb5 {
			namespace internal {

$FieldInfo _PaPacOptions_FieldInfo_[] = {
	{"CLAIMS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PaPacOptions, CLAIMS)},
	{"BRANCH_AWARE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PaPacOptions, BRANCH_AWARE)},
	{"FORWARD_TO_FULL_DC", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PaPacOptions, FORWARD_TO_FULL_DC)},
	{"RESOURCE_BASED_CONSTRAINED_DELEGATION", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PaPacOptions, RESOURCE_BASED_CONSTRAINED_DELEGATION)},
	{"flags", "Lsun/security/krb5/internal/util/KerberosFlags;", nullptr, $PRIVATE, $field(PaPacOptions, flags)},
	{}
};

$MethodInfo _PaPacOptions_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(PaPacOptions, init$, void)},
	{"<init>", "(Lsun/security/util/DerValue;)V", nullptr, $PUBLIC, $method(PaPacOptions, init$, void, $DerValue*), "sun.security.krb5.Asn1Exception,java.io.IOException"},
	{"asn1Encode", "()[B", nullptr, $PUBLIC, $virtualMethod(PaPacOptions, asn1Encode, $bytes*), "java.io.IOException"},
	{"getBranchAware", "()Z", nullptr, $PUBLIC, $virtualMethod(PaPacOptions, getBranchAware, bool)},
	{"getClaims", "()Z", nullptr, $PUBLIC, $virtualMethod(PaPacOptions, getClaims, bool)},
	{"getForwardToFullDC", "()Z", nullptr, $PUBLIC, $virtualMethod(PaPacOptions, getForwardToFullDC, bool)},
	{"getResourceBasedConstrainedDelegation", "()Z", nullptr, $PUBLIC, $virtualMethod(PaPacOptions, getResourceBasedConstrainedDelegation, bool)},
	{"setBranchAware", "(Z)Lsun/security/krb5/internal/PaPacOptions;", nullptr, $PUBLIC, $virtualMethod(PaPacOptions, setBranchAware, PaPacOptions*, bool)},
	{"setClaims", "(Z)Lsun/security/krb5/internal/PaPacOptions;", nullptr, $PUBLIC, $virtualMethod(PaPacOptions, setClaims, PaPacOptions*, bool)},
	{"setForwardToFullDC", "(Z)Lsun/security/krb5/internal/PaPacOptions;", nullptr, $PUBLIC, $virtualMethod(PaPacOptions, setForwardToFullDC, PaPacOptions*, bool)},
	{"setResourceBasedConstrainedDelegation", "(Z)Lsun/security/krb5/internal/PaPacOptions;", nullptr, $PUBLIC, $virtualMethod(PaPacOptions, setResourceBasedConstrainedDelegation, PaPacOptions*, bool)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(PaPacOptions, toString, $String*)},
	{}
};

$ClassInfo _PaPacOptions_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.krb5.internal.PaPacOptions",
	"java.lang.Object",
	nullptr,
	_PaPacOptions_FieldInfo_,
	_PaPacOptions_MethodInfo_
};

$Object* allocate$PaPacOptions($Class* clazz) {
	return $of($alloc(PaPacOptions));
}

void PaPacOptions::init$() {
	$set(this, flags, $new($KerberosFlags, $Krb5::AP_OPTS_MAX + 1));
}

void PaPacOptions::init$($DerValue* encoding) {
	$useLocalCurrentObjectStackCache();
	if ($nc(encoding)->getTag() != $DerValue::tag_Sequence) {
		$throwNew($Asn1Exception, $Krb5::ASN1_BAD_ID);
	}
	$var($DerValue, der, $nc($($nc(encoding)->getData()))->getDerValue());
	if (((int32_t)($nc(der)->getTag() & (uint32_t)31)) == 0) {
		$set(this, flags, $new($KDCOptions, $($nc($(der->getData()))->getDerValue())));
	} else {
		$throwNew($Asn1Exception, $Krb5::ASN1_BAD_ID);
	}
}

PaPacOptions* PaPacOptions::setClaims(bool value) {
	$nc(this->flags)->set(PaPacOptions::CLAIMS, value);
	return this;
}

bool PaPacOptions::getClaims() {
	return $nc(this->flags)->get(PaPacOptions::CLAIMS);
}

PaPacOptions* PaPacOptions::setBranchAware(bool value) {
	$nc(this->flags)->set(PaPacOptions::BRANCH_AWARE, value);
	return this;
}

bool PaPacOptions::getBranchAware() {
	return $nc(this->flags)->get(PaPacOptions::BRANCH_AWARE);
}

PaPacOptions* PaPacOptions::setForwardToFullDC(bool value) {
	$nc(this->flags)->set(PaPacOptions::FORWARD_TO_FULL_DC, value);
	return this;
}

bool PaPacOptions::getForwardToFullDC() {
	return $nc(this->flags)->get(PaPacOptions::FORWARD_TO_FULL_DC);
}

PaPacOptions* PaPacOptions::setResourceBasedConstrainedDelegation(bool value) {
	$nc(this->flags)->set(PaPacOptions::RESOURCE_BASED_CONSTRAINED_DELEGATION, value);
	return this;
}

bool PaPacOptions::getResourceBasedConstrainedDelegation() {
	return $nc(this->flags)->get(PaPacOptions::RESOURCE_BASED_CONSTRAINED_DELEGATION);
}

$bytes* PaPacOptions::asn1Encode() {
	$useLocalCurrentObjectStackCache();
	$var($bytes, bytes, nullptr);
	{
		$var($DerOutputStream, temp, $new($DerOutputStream));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					int8_t var$1 = $DerValue::createTag($DerValue::TAG_CONTEXT, true, (int8_t)0);
					temp->write(var$1, $($nc(this->flags)->asn1Encode()));
					$assign(bytes, temp->toByteArray());
				} catch ($Throwable& t$) {
					try {
						temp->close();
					} catch ($Throwable& x2) {
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable& var$2) {
				$assign(var$0, var$2);
			} /*finally*/ {
				temp->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
	{
		$var($DerOutputStream, temp, $new($DerOutputStream));
		{
			$var($Throwable, var$3, nullptr);
			$var($bytes, var$5, nullptr);
			bool return$4 = false;
			try {
				try {
					temp->write($DerValue::tag_Sequence, bytes);
					$assign(var$5, temp->toByteArray());
					return$4 = true;
					goto $finally1;
				} catch ($Throwable& t$) {
					try {
						temp->close();
					} catch ($Throwable& x2) {
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable& var$6) {
				$assign(var$3, var$6);
			} $finally1: {
				temp->close();
			}
			if (var$3 != nullptr) {
				$throw(var$3);
			}
			if (return$4) {
				return var$5;
			}
		}
	}
	$shouldNotReachHere();
}

$String* PaPacOptions::toString() {
	return $nc(this->flags)->toString();
}

PaPacOptions::PaPacOptions() {
}

$Class* PaPacOptions::load$($String* name, bool initialize) {
	$loadClass(PaPacOptions, name, initialize, &_PaPacOptions_ClassInfo_, allocate$PaPacOptions);
	return class$;
}

$Class* PaPacOptions::class$ = nullptr;

			} // internal
		} // krb5
	} // security
} // sun