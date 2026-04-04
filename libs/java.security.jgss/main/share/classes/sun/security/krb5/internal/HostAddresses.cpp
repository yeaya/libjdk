#include <sun/security/krb5/internal/HostAddresses.h>
#include <java/io/BufferedOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <java/net/InetAddress.h>
#include <java/net/NetworkInterface.h>
#include <java/net/UnknownHostException.h>
#include <java/util/AbstractCollection.h>
#include <java/util/ArrayList.h>
#include <java/util/Arrays.h>
#include <java/util/Collections.h>
#include <java/util/Enumeration.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedHashSet.h>
#include <java/util/Set.h>
#include <java/util/Vector.h>
#include <sun/security/krb5/Asn1Exception.h>
#include <sun/security/krb5/Config.h>
#include <sun/security/krb5/KrbException.h>
#include <sun/security/krb5/PrincipalName.h>
#include <sun/security/krb5/internal/HostAddress.h>
#include <sun/security/krb5/internal/Krb5.h>
#include <sun/security/krb5/internal/ccache/CCacheOutputStream.h>
#include <sun/security/util/DerInputStream.h>
#include <sun/security/util/DerOutputStream.h>
#include <sun/security/util/DerValue.h>
#include <jcpp.h>

#undef ADDRTYPE_INET
#undef ADDRTYPE_INET6
#undef ASN1_BAD_ID
#undef DEBUG
#undef KRB_ERR_GENERIC
#undef KRB_NT_SRV_HST

using $InetAddressArray = $Array<::java::net::InetAddress>;
using $HostAddressArray = $Array<::sun::security::krb5::internal::HostAddress>;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetAddress = ::java::net::InetAddress;
using $NetworkInterface = ::java::net::NetworkInterface;
using $UnknownHostException = ::java::net::UnknownHostException;
using $AbstractCollection = ::java::util::AbstractCollection;
using $ArrayList = ::java::util::ArrayList;
using $Arrays = ::java::util::Arrays;
using $Collections = ::java::util::Collections;
using $Iterator = ::java::util::Iterator;
using $LinkedHashSet = ::java::util::LinkedHashSet;
using $Set = ::java::util::Set;
using $Vector = ::java::util::Vector;
using $Asn1Exception = ::sun::security::krb5::Asn1Exception;
using $Config = ::sun::security::krb5::Config;
using $KrbException = ::sun::security::krb5::KrbException;
using $PrincipalName = ::sun::security::krb5::PrincipalName;
using $HostAddress = ::sun::security::krb5::internal::HostAddress;
using $Krb5 = ::sun::security::krb5::internal::Krb5;
using $CCacheOutputStream = ::sun::security::krb5::internal::ccache::CCacheOutputStream;
using $DerInputStream = ::sun::security::util::DerInputStream;
using $DerOutputStream = ::sun::security::util::DerOutputStream;
using $DerValue = ::sun::security::util::DerValue;

namespace sun {
	namespace security {
		namespace krb5 {
			namespace internal {

bool HostAddresses::DEBUG = false;

void HostAddresses::init$($HostAddressArray* new_addresses) {
	$useLocalObjectStack();
	$set(this, addresses, nullptr);
	this->hashCode$ = 0;
	if (new_addresses != nullptr) {
		$set(this, addresses, $new($HostAddressArray, new_addresses->length));
		for (int32_t i = 0; i < new_addresses->length; ++i) {
			if (new_addresses->get(i) == nullptr) {
				$throwNew($IOException, "Cannot create a HostAddress"_s);
			} else {
				$nc(this->addresses)->set(i, $$cast($HostAddress, $nc(new_addresses->get(i))->clone()));
			}
		}
	}
}

void HostAddresses::init$() {
	$set(this, addresses, nullptr);
	this->hashCode$ = 0;
	$set(this, addresses, $new($HostAddressArray, 1));
	this->addresses->set(0, $$new($HostAddress));
}

void HostAddresses::init$(int32_t dummy) {
	$set(this, addresses, nullptr);
	this->hashCode$ = 0;
}

void HostAddresses::init$($PrincipalName* serverPrincipal) {
	$useLocalObjectStack();
	$set(this, addresses, nullptr);
	this->hashCode$ = 0;
	$var($StringArray, components, $nc(serverPrincipal)->getNameStrings());
	if (serverPrincipal->getNameType() != $PrincipalName::KRB_NT_SRV_HST || $nc(components)->length < 2) {
		$throwNew($KrbException, $Krb5::KRB_ERR_GENERIC, "Bad name"_s);
	}
	$var($String, host, $nc(components)->get(1));
	$var($InetAddressArray, addr, $InetAddress::getAllByName(host));
	$var($HostAddressArray, hAddrs, $new($HostAddressArray, $nc(addr)->length));
	for (int32_t i = 0; i < addr->length; ++i) {
		hAddrs->set(i, $$new($HostAddress, addr->get(i)));
	}
	$set(this, addresses, hAddrs);
}

$Object* HostAddresses::clone() {
	$useLocalObjectStack();
	$var(HostAddresses, new_hostAddresses, $new(HostAddresses, 0));
	if (this->addresses != nullptr) {
		$set(new_hostAddresses, addresses, $new($HostAddressArray, this->addresses->length));
		for (int32_t i = 0; i < $nc(this->addresses)->length; ++i) {
			$nc(new_hostAddresses->addresses)->set(i, $$cast($HostAddress, $nc(this->addresses->get(i))->clone()));
		}
	}
	return new_hostAddresses;
}

bool HostAddresses::inList($HostAddress* addr) {
	if (this->addresses != nullptr) {
		for (int32_t i = 0; i < $nc(this->addresses)->length; ++i) {
			if ($nc(this->addresses->get(i))->equals(addr)) {
				return true;
			}
		}
	}
	return false;
}

int32_t HostAddresses::hashCode() {
	if (this->hashCode$ == 0) {
		int32_t result = 17;
		if (this->addresses != nullptr) {
			for (int32_t i = 0; i < $nc(this->addresses)->length; ++i) {
				result = 37 * result + $nc(this->addresses->get(i))->hashCode();
			}
		}
		this->hashCode$ = result;
	}
	return this->hashCode$;
}

bool HostAddresses::equals(Object$* obj) {
	if ($equals(this, obj)) {
		return true;
	}
	if (!($instanceOf(HostAddresses, obj))) {
		return false;
	}
	$var(HostAddresses, addrs, $cast(HostAddresses, obj));
	if ((this->addresses == nullptr && $nc(addrs)->addresses != nullptr) || (this->addresses != nullptr && $nc(addrs)->addresses == nullptr)) {
		return false;
	}
	if (this->addresses != nullptr && $nc(addrs)->addresses != nullptr) {
		if (this->addresses->length != addrs->addresses->length) {
			return false;
		}
		for (int32_t i = 0; i < $nc(this->addresses)->length; ++i) {
			if (!$nc(this->addresses->get(i))->equals($nc(addrs->addresses)->get(i))) {
				return false;
			}
		}
	}
	return true;
}

void HostAddresses::init$($DerValue* encoding) {
	$useLocalObjectStack();
	$set(this, addresses, nullptr);
	this->hashCode$ = 0;
	$var($Vector, tempAddresses, $new($Vector));
	$var($DerValue, der, nullptr);
	while ($$nc($nc(encoding)->getData())->available() > 0) {
		$assign(der, $$nc(encoding->getData())->getDerValue());
		tempAddresses->addElement($$new($HostAddress, der));
	}
	if (tempAddresses->size() > 0) {
		$set(this, addresses, $new($HostAddressArray, tempAddresses->size()));
		tempAddresses->copyInto(this->addresses);
	}
}

$bytes* HostAddresses::asn1Encode() {
	$useLocalObjectStack();
	$var($DerOutputStream, bytes, $new($DerOutputStream));
	$var($DerOutputStream, temp, $new($DerOutputStream));
	if (this->addresses != nullptr && this->addresses->length > 0) {
		for (int32_t i = 0; i < $nc(this->addresses)->length; ++i) {
			bytes->write($($nc(this->addresses->get(i))->asn1Encode()));
		}
	}
	temp->write($DerValue::tag_Sequence, bytes);
	return temp->toByteArray();
}

HostAddresses* HostAddresses::parse($DerInputStream* data, int8_t explicitTag, bool optional) {
	$init(HostAddresses);
	$useLocalObjectStack();
	if ((optional) && (((int8_t)$nc(data)->peekByte() & (int8_t)31) != explicitTag)) {
		return nullptr;
	}
	$var($DerValue, der, $nc(data)->getDerValue());
	if (explicitTag != ($nc(der)->getTag() & (int8_t)31)) {
		$throwNew($Asn1Exception, $Krb5::ASN1_BAD_ID);
	} else {
		$var($DerValue, subDer, $$nc(der->getData())->getDerValue());
		return $new(HostAddresses, subDer);
	}
}

void HostAddresses::writeAddrs($CCacheOutputStream* cos) {
	if (this->addresses == nullptr || this->addresses->length == 0) {
		$nc(cos)->write32(0);
		return;
	}
	$nc(cos)->write32($nc(this->addresses)->length);
	for (int32_t i = 0; i < $nc(this->addresses)->length; ++i) {
		cos->write16($nc(this->addresses->get(i))->addrType);
		cos->write32($nc($nc($nc(this->addresses)->get(i))->address)->length);
		cos->write($nc($nc(this->addresses)->get(i))->address, 0, $nc($nc($nc(this->addresses)->get(i))->address)->length);
	}
}

$InetAddressArray* HostAddresses::getInetAddresses() {
	$useLocalObjectStack();
	if (this->addresses == nullptr || this->addresses->length == 0) {
		return nullptr;
	}
	$var($ArrayList, ipAddrs, $new($ArrayList, $nc(this->addresses)->length));
	for (int32_t i = 0; i < $nc(this->addresses)->length; ++i) {
		try {
			if (($nc(this->addresses->get(i))->addrType == $Krb5::ADDRTYPE_INET) || ($nc(this->addresses->get(i))->addrType == $Krb5::ADDRTYPE_INET6)) {
				ipAddrs->add($($nc(this->addresses->get(i))->getInetAddress()));
			}
		} catch ($UnknownHostException& e) {
			return nullptr;
		}
	}
	$var($InetAddressArray, retVal, $new($InetAddressArray, ipAddrs->size()));
	return $cast($InetAddressArray, ipAddrs->toArray(retVal));
}

HostAddresses* HostAddresses::getLocalAddresses() {
	$init(HostAddresses);
	$useLocalObjectStack();
	$var($Set, all, $new($LinkedHashSet));
	try {
		if (HostAddresses::DEBUG) {
			$nc($System::out)->println(">>> KrbKdcReq local addresses are:"_s);
		}
		$var($String, extra, $$nc($Config::getInstance())->getAll($$new($StringArray, {
			"libdefaults"_s,
			"extra_addresses"_s
		})));
		if (extra != nullptr) {
			$var($StringArray, arr$, extra->split("\\s+"_s));
			for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
				$var($String, s, arr$->get(i$));
				{
					all->add($($InetAddress::getByName(s)));
					if (HostAddresses::DEBUG) {
						$nc($System::out)->println($$str({"   extra_addresses: "_s, $($InetAddress::getByName(s))}));
					}
				}
			}
		}
		{
			$var($Iterator, i$, $$nc($Collections::list($($NetworkInterface::getNetworkInterfaces())))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($NetworkInterface, ni, $cast($NetworkInterface, i$->next()));
				{
					if (HostAddresses::DEBUG) {
						$nc($System::out)->println($$str({"   NetworkInterface "_s, ni, ":"_s}));
						$System::out->println($$str({"      "_s, $($Collections::list($($nc(ni)->getInetAddresses())))}));
					}
					all->addAll($$cast($AbstractCollection, $Collections::list($($nc(ni)->getInetAddresses()))));
				}
			}
		}
		return $new(HostAddresses, $$cast($InetAddressArray, all->toArray($$new($InetAddressArray, all->size()))));
	} catch ($Exception& exc) {
		$throwNew($IOException, $(exc->toString()));
	}
	$shouldNotReachHere();
}

void HostAddresses::init$($InetAddressArray* inetAddresses) {
	$useLocalObjectStack();
	$set(this, addresses, nullptr);
	this->hashCode$ = 0;
	if (inetAddresses == nullptr) {
		$set(this, addresses, nullptr);
		return;
	}
	$set(this, addresses, $new($HostAddressArray, $nc(inetAddresses)->length));
	for (int32_t i = 0; i < inetAddresses->length; ++i) {
		this->addresses->set(i, $$new($HostAddress, inetAddresses->get(i)));
	}
}

$String* HostAddresses::toString() {
	return $Arrays::toString(this->addresses);
}

void HostAddresses::clinit$($Class* clazz) {
	$init($Krb5);
	HostAddresses::DEBUG = $Krb5::DEBUG;
}

HostAddresses::HostAddresses() {
}

$Class* HostAddresses::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"DEBUG", "Z", nullptr, $PRIVATE | $STATIC, $staticField(HostAddresses, DEBUG)},
		{"addresses", "[Lsun/security/krb5/internal/HostAddress;", nullptr, $PRIVATE, $field(HostAddresses, addresses)},
		{"hashCode", "I", nullptr, $PRIVATE | $VOLATILE, $field(HostAddresses, hashCode$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([Lsun/security/krb5/internal/HostAddress;)V", nullptr, $PUBLIC, $method(HostAddresses, init$, void, $HostAddressArray*), "java.io.IOException"},
		{"<init>", "()V", nullptr, $PUBLIC, $method(HostAddresses, init$, void), "java.net.UnknownHostException"},
		{"<init>", "(I)V", nullptr, $PRIVATE, $method(HostAddresses, init$, void, int32_t)},
		{"<init>", "(Lsun/security/krb5/PrincipalName;)V", nullptr, $PUBLIC, $method(HostAddresses, init$, void, $PrincipalName*), "java.net.UnknownHostException,sun.security.krb5.KrbException"},
		{"<init>", "(Lsun/security/util/DerValue;)V", nullptr, $PUBLIC, $method(HostAddresses, init$, void, $DerValue*), "sun.security.krb5.Asn1Exception,java.io.IOException"},
		{"<init>", "([Ljava/net/InetAddress;)V", nullptr, $PUBLIC, $method(HostAddresses, init$, void, $InetAddressArray*)},
		{"asn1Encode", "()[B", nullptr, $PUBLIC, $virtualMethod(HostAddresses, asn1Encode, $bytes*), "sun.security.krb5.Asn1Exception,java.io.IOException"},
		{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(HostAddresses, clone, $Object*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(HostAddresses, equals, bool, Object$*)},
		{"getInetAddresses", "()[Ljava/net/InetAddress;", nullptr, $PUBLIC, $virtualMethod(HostAddresses, getInetAddresses, $InetAddressArray*)},
		{"getLocalAddresses", "()Lsun/security/krb5/internal/HostAddresses;", nullptr, $PUBLIC | $STATIC, $staticMethod(HostAddresses, getLocalAddresses, HostAddresses*), "java.io.IOException"},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(HostAddresses, hashCode, int32_t)},
		{"inList", "(Lsun/security/krb5/internal/HostAddress;)Z", nullptr, $PUBLIC, $virtualMethod(HostAddresses, inList, bool, $HostAddress*)},
		{"parse", "(Lsun/security/util/DerInputStream;BZ)Lsun/security/krb5/internal/HostAddresses;", nullptr, $PUBLIC | $STATIC, $staticMethod(HostAddresses, parse, HostAddresses*, $DerInputStream*, int8_t, bool), "sun.security.krb5.Asn1Exception,java.io.IOException"},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(HostAddresses, toString, $String*)},
		{"writeAddrs", "(Lsun/security/krb5/internal/ccache/CCacheOutputStream;)V", nullptr, $PUBLIC, $virtualMethod(HostAddresses, writeAddrs, void, $CCacheOutputStream*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.krb5.internal.HostAddresses",
		"java.lang.Object",
		"java.lang.Cloneable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(HostAddresses, name, initialize, &classInfo$$, HostAddresses::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(HostAddresses);
	});
	return class$;
}

$Class* HostAddresses::class$ = nullptr;

			} // internal
		} // krb5
	} // security
} // sun