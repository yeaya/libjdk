#include <sun/security/jgss/spi/GSSContextSpi.h>

#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/security/Provider.h>
#include <org/ietf/jgss/ChannelBinding.h>
#include <org/ietf/jgss/MessageProp.h>
#include <org/ietf/jgss/Oid.h>
#include <sun/security/jgss/spi/GSSCredentialSpi.h>
#include <sun/security/jgss/spi/GSSNameSpi.h>
#include <jcpp.h>

using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Provider = ::java::security::Provider;
using $ChannelBinding = ::org::ietf::jgss::ChannelBinding;
using $MessageProp = ::org::ietf::jgss::MessageProp;
using $Oid = ::org::ietf::jgss::Oid;
using $GSSCredentialSpi = ::sun::security::jgss::spi::GSSCredentialSpi;
using $GSSNameSpi = ::sun::security::jgss::spi::GSSNameSpi;

namespace sun {
	namespace security {
		namespace jgss {
			namespace spi {

$MethodInfo _GSSContextSpi_MethodInfo_[] = {
	{"acceptSecContext", "(Ljava/io/InputStream;I)[B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSContextSpi, acceptSecContext, $bytes*, $InputStream*, int32_t), "org.ietf.jgss.GSSException"},
	{"dispose", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSContextSpi, dispose, void), "org.ietf.jgss.GSSException"},
	{"export", "()[B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSContextSpi, export$, $bytes*), "org.ietf.jgss.GSSException"},
	{"getAnonymityState", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSContextSpi, getAnonymityState, bool)},
	{"getConfState", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSContextSpi, getConfState, bool)},
	{"getCredDelegState", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSContextSpi, getCredDelegState, bool)},
	{"getDelegCred", "()Lsun/security/jgss/spi/GSSCredentialSpi;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSContextSpi, getDelegCred, $GSSCredentialSpi*), "org.ietf.jgss.GSSException"},
	{"getDelegPolicyState", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSContextSpi, getDelegPolicyState, bool)},
	{"getIntegState", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSContextSpi, getIntegState, bool)},
	{"getLifetime", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSContextSpi, getLifetime, int32_t)},
	{"getMIC", "(Ljava/io/InputStream;Ljava/io/OutputStream;Lorg/ietf/jgss/MessageProp;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSContextSpi, getMIC, void, $InputStream*, $OutputStream*, $MessageProp*), "org.ietf.jgss.GSSException"},
	{"getMIC", "([BIILorg/ietf/jgss/MessageProp;)[B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSContextSpi, getMIC, $bytes*, $bytes*, int32_t, int32_t, $MessageProp*), "org.ietf.jgss.GSSException"},
	{"getMech", "()Lorg/ietf/jgss/Oid;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSContextSpi, getMech, $Oid*), "org.ietf.jgss.GSSException"},
	{"getMutualAuthState", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSContextSpi, getMutualAuthState, bool)},
	{"getProvider", "()Ljava/security/Provider;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSContextSpi, getProvider, $Provider*)},
	{"getReplayDetState", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSContextSpi, getReplayDetState, bool)},
	{"getSequenceDetState", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSContextSpi, getSequenceDetState, bool)},
	{"getSrcName", "()Lsun/security/jgss/spi/GSSNameSpi;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSContextSpi, getSrcName, $GSSNameSpi*), "org.ietf.jgss.GSSException"},
	{"getTargName", "()Lsun/security/jgss/spi/GSSNameSpi;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSContextSpi, getTargName, $GSSNameSpi*), "org.ietf.jgss.GSSException"},
	{"getWrapSizeLimit", "(IZI)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSContextSpi, getWrapSizeLimit, int32_t, int32_t, bool, int32_t), "org.ietf.jgss.GSSException"},
	{"initSecContext", "(Ljava/io/InputStream;I)[B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSContextSpi, initSecContext, $bytes*, $InputStream*, int32_t), "org.ietf.jgss.GSSException"},
	{"inquireSecContext", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSContextSpi, inquireSecContext, $Object*, $String*), "org.ietf.jgss.GSSException"},
	{"isEstablished", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSContextSpi, isEstablished, bool)},
	{"isInitiator", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSContextSpi, isInitiator, bool)},
	{"isProtReady", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSContextSpi, isProtReady, bool)},
	{"isTransferable", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSContextSpi, isTransferable, bool), "org.ietf.jgss.GSSException"},
	{"requestAnonymity", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSContextSpi, requestAnonymity, void, bool), "org.ietf.jgss.GSSException"},
	{"requestConf", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSContextSpi, requestConf, void, bool), "org.ietf.jgss.GSSException"},
	{"requestCredDeleg", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSContextSpi, requestCredDeleg, void, bool), "org.ietf.jgss.GSSException"},
	{"requestDelegPolicy", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSContextSpi, requestDelegPolicy, void, bool), "org.ietf.jgss.GSSException"},
	{"requestInteg", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSContextSpi, requestInteg, void, bool), "org.ietf.jgss.GSSException"},
	{"requestLifetime", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSContextSpi, requestLifetime, void, int32_t), "org.ietf.jgss.GSSException"},
	{"requestMutualAuth", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSContextSpi, requestMutualAuth, void, bool), "org.ietf.jgss.GSSException"},
	{"requestReplayDet", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSContextSpi, requestReplayDet, void, bool), "org.ietf.jgss.GSSException"},
	{"requestSequenceDet", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSContextSpi, requestSequenceDet, void, bool), "org.ietf.jgss.GSSException"},
	{"setChannelBinding", "(Lorg/ietf/jgss/ChannelBinding;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSContextSpi, setChannelBinding, void, $ChannelBinding*), "org.ietf.jgss.GSSException"},
	{"unwrap", "(Ljava/io/InputStream;Ljava/io/OutputStream;Lorg/ietf/jgss/MessageProp;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSContextSpi, unwrap, void, $InputStream*, $OutputStream*, $MessageProp*), "org.ietf.jgss.GSSException"},
	{"unwrap", "([BIILorg/ietf/jgss/MessageProp;)[B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSContextSpi, unwrap, $bytes*, $bytes*, int32_t, int32_t, $MessageProp*), "org.ietf.jgss.GSSException"},
	{"verifyMIC", "(Ljava/io/InputStream;Ljava/io/InputStream;Lorg/ietf/jgss/MessageProp;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSContextSpi, verifyMIC, void, $InputStream*, $InputStream*, $MessageProp*), "org.ietf.jgss.GSSException"},
	{"verifyMIC", "([BII[BIILorg/ietf/jgss/MessageProp;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSContextSpi, verifyMIC, void, $bytes*, int32_t, int32_t, $bytes*, int32_t, int32_t, $MessageProp*), "org.ietf.jgss.GSSException"},
	{"wrap", "(Ljava/io/InputStream;Ljava/io/OutputStream;Lorg/ietf/jgss/MessageProp;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSContextSpi, wrap, void, $InputStream*, $OutputStream*, $MessageProp*), "org.ietf.jgss.GSSException"},
	{"wrap", "([BIILorg/ietf/jgss/MessageProp;)[B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSContextSpi, wrap, $bytes*, $bytes*, int32_t, int32_t, $MessageProp*), "org.ietf.jgss.GSSException"},
	{}
};

$ClassInfo _GSSContextSpi_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.security.jgss.spi.GSSContextSpi",
	nullptr,
	nullptr,
	nullptr,
	_GSSContextSpi_MethodInfo_
};

$Object* allocate$GSSContextSpi($Class* clazz) {
	return $of($alloc(GSSContextSpi));
}

$Class* GSSContextSpi::load$($String* name, bool initialize) {
	$loadClass(GSSContextSpi, name, initialize, &_GSSContextSpi_ClassInfo_, allocate$GSSContextSpi);
	return class$;
}

$Class* GSSContextSpi::class$ = nullptr;

			} // spi
		} // jgss
	} // security
} // sun