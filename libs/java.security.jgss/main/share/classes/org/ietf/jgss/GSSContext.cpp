#include <org/ietf/jgss/GSSContext.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <org/ietf/jgss/ChannelBinding.h>
#include <org/ietf/jgss/GSSCredential.h>
#include <org/ietf/jgss/GSSName.h>
#include <org/ietf/jgss/MessageProp.h>
#include <org/ietf/jgss/Oid.h>
#include <jcpp.h>

#undef DEFAULT_LIFETIME
#undef INDEFINITE_LIFETIME

using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $ChannelBinding = ::org::ietf::jgss::ChannelBinding;
using $GSSCredential = ::org::ietf::jgss::GSSCredential;
using $GSSName = ::org::ietf::jgss::GSSName;
using $MessageProp = ::org::ietf::jgss::MessageProp;
using $Oid = ::org::ietf::jgss::Oid;

namespace org {
	namespace ietf {
		namespace jgss {

$Class* GSSContext::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"DEFAULT_LIFETIME", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(GSSContext, DEFAULT_LIFETIME)},
		{"INDEFINITE_LIFETIME", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(GSSContext, INDEFINITE_LIFETIME)},
		{}
	};
	$NamedAttribute acceptSecContextmethodAnnotations$$$1$namedAttribute[] = {
		{"since", 's', "11"},
		{}
	};
	$CompoundAttribute acceptSecContextmethodAnnotations$$$1[] = {
		{"Ljava/lang/Deprecated;", acceptSecContextmethodAnnotations$$$1$namedAttribute},
		{}
	};
	$NamedAttribute getMICmethodAnnotations$$$1$namedAttribute[] = {
		{"since", 's', "11"},
		{}
	};
	$CompoundAttribute getMICmethodAnnotations$$$1[] = {
		{"Ljava/lang/Deprecated;", getMICmethodAnnotations$$$1$namedAttribute},
		{}
	};
	$NamedAttribute initSecContextmethodAnnotations$$$1$namedAttribute[] = {
		{"since", 's', "11"},
		{}
	};
	$CompoundAttribute initSecContextmethodAnnotations$$$1[] = {
		{"Ljava/lang/Deprecated;", initSecContextmethodAnnotations$$$1$namedAttribute},
		{}
	};
	$NamedAttribute unwrapmethodAnnotations$$$1$namedAttribute[] = {
		{"since", 's', "11"},
		{}
	};
	$CompoundAttribute unwrapmethodAnnotations$$$1[] = {
		{"Ljava/lang/Deprecated;", unwrapmethodAnnotations$$$1$namedAttribute},
		{}
	};
	$NamedAttribute verifyMICmethodAnnotations$$$1$namedAttribute[] = {
		{"since", 's', "11"},
		{}
	};
	$CompoundAttribute verifyMICmethodAnnotations$$$1[] = {
		{"Ljava/lang/Deprecated;", verifyMICmethodAnnotations$$$1$namedAttribute},
		{}
	};
	$NamedAttribute wrapmethodAnnotations$$$1$namedAttribute[] = {
		{"since", 's', "11"},
		{}
	};
	$CompoundAttribute wrapmethodAnnotations$$$1[] = {
		{"Ljava/lang/Deprecated;", wrapmethodAnnotations$$$1$namedAttribute},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"acceptSecContext", "([BII)[B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSContext, acceptSecContext, $bytes*, $bytes*, int32_t, int32_t), "org.ietf.jgss.GSSException"},
		{"acceptSecContext", "(Ljava/io/InputStream;Ljava/io/OutputStream;)V", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, $virtualMethod(GSSContext, acceptSecContext, void, $InputStream*, $OutputStream*), "org.ietf.jgss.GSSException", nullptr, acceptSecContextmethodAnnotations$$$1},
		{"dispose", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSContext, dispose, void), "org.ietf.jgss.GSSException"},
		{"export", "()[B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSContext, export$, $bytes*), "org.ietf.jgss.GSSException"},
		{"getAnonymityState", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSContext, getAnonymityState, bool)},
		{"getConfState", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSContext, getConfState, bool)},
		{"getCredDelegState", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSContext, getCredDelegState, bool)},
		{"getDelegCred", "()Lorg/ietf/jgss/GSSCredential;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSContext, getDelegCred, $GSSCredential*), "org.ietf.jgss.GSSException"},
		{"getIntegState", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSContext, getIntegState, bool)},
		{"getLifetime", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSContext, getLifetime, int32_t)},
		{"getMIC", "([BIILorg/ietf/jgss/MessageProp;)[B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSContext, getMIC, $bytes*, $bytes*, int32_t, int32_t, $MessageProp*), "org.ietf.jgss.GSSException"},
		{"getMIC", "(Ljava/io/InputStream;Ljava/io/OutputStream;Lorg/ietf/jgss/MessageProp;)V", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, $virtualMethod(GSSContext, getMIC, void, $InputStream*, $OutputStream*, $MessageProp*), "org.ietf.jgss.GSSException", nullptr, getMICmethodAnnotations$$$1},
		{"getMech", "()Lorg/ietf/jgss/Oid;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSContext, getMech, $Oid*), "org.ietf.jgss.GSSException"},
		{"getMutualAuthState", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSContext, getMutualAuthState, bool)},
		{"getReplayDetState", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSContext, getReplayDetState, bool)},
		{"getSequenceDetState", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSContext, getSequenceDetState, bool)},
		{"getSrcName", "()Lorg/ietf/jgss/GSSName;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSContext, getSrcName, $GSSName*), "org.ietf.jgss.GSSException"},
		{"getTargName", "()Lorg/ietf/jgss/GSSName;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSContext, getTargName, $GSSName*), "org.ietf.jgss.GSSException"},
		{"getWrapSizeLimit", "(IZI)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSContext, getWrapSizeLimit, int32_t, int32_t, bool, int32_t), "org.ietf.jgss.GSSException"},
		{"initSecContext", "([BII)[B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSContext, initSecContext, $bytes*, $bytes*, int32_t, int32_t), "org.ietf.jgss.GSSException"},
		{"initSecContext", "(Ljava/io/InputStream;Ljava/io/OutputStream;)I", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, $virtualMethod(GSSContext, initSecContext, int32_t, $InputStream*, $OutputStream*), "org.ietf.jgss.GSSException", nullptr, initSecContextmethodAnnotations$$$1},
		{"isEstablished", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSContext, isEstablished, bool)},
		{"isInitiator", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSContext, isInitiator, bool), "org.ietf.jgss.GSSException"},
		{"isProtReady", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSContext, isProtReady, bool)},
		{"isTransferable", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSContext, isTransferable, bool), "org.ietf.jgss.GSSException"},
		{"requestAnonymity", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSContext, requestAnonymity, void, bool), "org.ietf.jgss.GSSException"},
		{"requestConf", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSContext, requestConf, void, bool), "org.ietf.jgss.GSSException"},
		{"requestCredDeleg", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSContext, requestCredDeleg, void, bool), "org.ietf.jgss.GSSException"},
		{"requestInteg", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSContext, requestInteg, void, bool), "org.ietf.jgss.GSSException"},
		{"requestLifetime", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSContext, requestLifetime, void, int32_t), "org.ietf.jgss.GSSException"},
		{"requestMutualAuth", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSContext, requestMutualAuth, void, bool), "org.ietf.jgss.GSSException"},
		{"requestReplayDet", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSContext, requestReplayDet, void, bool), "org.ietf.jgss.GSSException"},
		{"requestSequenceDet", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSContext, requestSequenceDet, void, bool), "org.ietf.jgss.GSSException"},
		{"setChannelBinding", "(Lorg/ietf/jgss/ChannelBinding;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSContext, setChannelBinding, void, $ChannelBinding*), "org.ietf.jgss.GSSException"},
		{"unwrap", "([BIILorg/ietf/jgss/MessageProp;)[B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSContext, unwrap, $bytes*, $bytes*, int32_t, int32_t, $MessageProp*), "org.ietf.jgss.GSSException"},
		{"unwrap", "(Ljava/io/InputStream;Ljava/io/OutputStream;Lorg/ietf/jgss/MessageProp;)V", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, $virtualMethod(GSSContext, unwrap, void, $InputStream*, $OutputStream*, $MessageProp*), "org.ietf.jgss.GSSException", nullptr, unwrapmethodAnnotations$$$1},
		{"verifyMIC", "([BII[BIILorg/ietf/jgss/MessageProp;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSContext, verifyMIC, void, $bytes*, int32_t, int32_t, $bytes*, int32_t, int32_t, $MessageProp*), "org.ietf.jgss.GSSException"},
		{"verifyMIC", "(Ljava/io/InputStream;Ljava/io/InputStream;Lorg/ietf/jgss/MessageProp;)V", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, $virtualMethod(GSSContext, verifyMIC, void, $InputStream*, $InputStream*, $MessageProp*), "org.ietf.jgss.GSSException", nullptr, verifyMICmethodAnnotations$$$1},
		{"wrap", "([BIILorg/ietf/jgss/MessageProp;)[B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSContext, wrap, $bytes*, $bytes*, int32_t, int32_t, $MessageProp*), "org.ietf.jgss.GSSException"},
		{"wrap", "(Ljava/io/InputStream;Ljava/io/OutputStream;Lorg/ietf/jgss/MessageProp;)V", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, $virtualMethod(GSSContext, wrap, void, $InputStream*, $OutputStream*, $MessageProp*), "org.ietf.jgss.GSSException", nullptr, wrapmethodAnnotations$$$1},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"org.ietf.jgss.GSSContext",
		nullptr,
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(GSSContext, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GSSContext);
	});
	return class$;
}

$Class* GSSContext::class$ = nullptr;

		} // jgss
	} // ietf
} // org