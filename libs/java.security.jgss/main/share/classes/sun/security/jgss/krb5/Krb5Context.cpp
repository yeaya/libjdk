#include <sun/security/jgss/krb5/Krb5Context.h>

#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/lang/SecurityManager.h>
#include <java/security/AccessControlContext.h>
#include <java/security/AccessController.h>
#include <java/security/Permission.h>
#include <java/security/PrivilegedAction.h>
#include <java/security/PrivilegedActionException.h>
#include <java/security/PrivilegedExceptionAction.h>
#include <java/security/Provider.h>
#include <javax/security/auth/Subject.h>
#include <javax/security/auth/kerberos/EncryptionKey.h>
#include <javax/security/auth/kerberos/KerberosCredMessage.h>
#include <javax/security/auth/kerberos/KerberosPrincipal.h>
#include <javax/security/auth/kerberos/KerberosTicket.h>
#include <javax/security/auth/kerberos/ServicePermission.h>
#include <org/ietf/jgss/ChannelBinding.h>
#include <org/ietf/jgss/GSSContext.h>
#include <org/ietf/jgss/GSSCredential.h>
#include <org/ietf/jgss/GSSException.h>
#include <org/ietf/jgss/MessageProp.h>
#include <org/ietf/jgss/Oid.h>
#include <sun/security/jgss/GSSCaller.h>
#include <sun/security/jgss/GSSUtil.h>
#include <sun/security/jgss/TokenTracker.h>
#include <sun/security/jgss/krb5/AcceptSecContextToken.h>
#include <sun/security/jgss/krb5/CipherHelper.h>
#include <sun/security/jgss/krb5/InitSecContextToken.h>
#include <sun/security/jgss/krb5/InitialToken.h>
#include <sun/security/jgss/krb5/Krb5AcceptCredential.h>
#include <sun/security/jgss/krb5/Krb5Context$1.h>
#include <sun/security/jgss/krb5/Krb5Context$2.h>
#include <sun/security/jgss/krb5/Krb5Context$3.h>
#include <sun/security/jgss/krb5/Krb5Context$KerberosSessionKey.h>
#include <sun/security/jgss/krb5/Krb5CredElement.h>
#include <sun/security/jgss/krb5/Krb5InitCredential.h>
#include <sun/security/jgss/krb5/Krb5MechFactory.h>
#include <sun/security/jgss/krb5/Krb5NameElement.h>
#include <sun/security/jgss/krb5/Krb5ProxyCredential.h>
#include <sun/security/jgss/krb5/Krb5Util.h>
#include <sun/security/jgss/krb5/MessageToken.h>
#include <sun/security/jgss/krb5/MessageToken_v2.h>
#include <sun/security/jgss/krb5/MicToken.h>
#include <sun/security/jgss/krb5/MicToken_v2.h>
#include <sun/security/jgss/krb5/WrapToken.h>
#include <sun/security/jgss/krb5/WrapToken_v2.h>
#include <sun/security/jgss/spi/GSSCredentialSpi.h>
#include <sun/security/jgss/spi/GSSNameSpi.h>
#include <sun/security/krb5/Credentials.h>
#include <sun/security/krb5/EncryptionKey.h>
#include <sun/security/krb5/KrbApReq.h>
#include <sun/security/krb5/KrbCred.h>
#include <sun/security/krb5/KrbException.h>
#include <sun/security/krb5/PrincipalName.h>
#include <sun/security/krb5/internal/AuthorizationData.h>
#include <sun/security/krb5/internal/Ticket.h>
#include <sun/security/util/HexDumpEncoder.h>
#include <jcpp.h>

#undef ACCEPTOR_SUBKEY
#undef CALLER_ACCEPT
#undef DEBUG
#undef DEFAULT_LIFETIME
#undef FAILURE
#undef GSS_KRB5_MECH_OID
#undef INDEFINITE_LIFETIME
#undef INITIATOR_SUBKEY
#undef NO_CONTEXT
#undef NO_CRED
#undef PROVIDER
#undef SESSION_KEY
#undef STATE_DELETED
#undef STATE_DONE
#undef STATE_IN_PROCESS
#undef STATE_NEW
#undef UNAVAILABLE

using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityManager = ::java::lang::SecurityManager;
using $Void = ::java::lang::Void;
using $AccessControlContext = ::java::security::AccessControlContext;
using $AccessController = ::java::security::AccessController;
using $Permission = ::java::security::Permission;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $PrivilegedActionException = ::java::security::PrivilegedActionException;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
using $Provider = ::java::security::Provider;
using $Subject = ::javax::security::auth::Subject;
using $1EncryptionKey = ::javax::security::auth::kerberos::EncryptionKey;
using $KerberosCredMessage = ::javax::security::auth::kerberos::KerberosCredMessage;
using $KerberosPrincipal = ::javax::security::auth::kerberos::KerberosPrincipal;
using $KerberosTicket = ::javax::security::auth::kerberos::KerberosTicket;
using $ServicePermission = ::javax::security::auth::kerberos::ServicePermission;
using $ChannelBinding = ::org::ietf::jgss::ChannelBinding;
using $GSSContext = ::org::ietf::jgss::GSSContext;
using $GSSCredential = ::org::ietf::jgss::GSSCredential;
using $GSSException = ::org::ietf::jgss::GSSException;
using $MessageProp = ::org::ietf::jgss::MessageProp;
using $Oid = ::org::ietf::jgss::Oid;
using $GSSCaller = ::sun::security::jgss::GSSCaller;
using $GSSUtil = ::sun::security::jgss::GSSUtil;
using $TokenTracker = ::sun::security::jgss::TokenTracker;
using $AcceptSecContextToken = ::sun::security::jgss::krb5::AcceptSecContextToken;
using $CipherHelper = ::sun::security::jgss::krb5::CipherHelper;
using $InitSecContextToken = ::sun::security::jgss::krb5::InitSecContextToken;
using $InitialToken = ::sun::security::jgss::krb5::InitialToken;
using $Krb5AcceptCredential = ::sun::security::jgss::krb5::Krb5AcceptCredential;
using $Krb5Context$1 = ::sun::security::jgss::krb5::Krb5Context$1;
using $Krb5Context$2 = ::sun::security::jgss::krb5::Krb5Context$2;
using $Krb5Context$3 = ::sun::security::jgss::krb5::Krb5Context$3;
using $Krb5Context$KerberosSessionKey = ::sun::security::jgss::krb5::Krb5Context$KerberosSessionKey;
using $Krb5CredElement = ::sun::security::jgss::krb5::Krb5CredElement;
using $Krb5InitCredential = ::sun::security::jgss::krb5::Krb5InitCredential;
using $Krb5MechFactory = ::sun::security::jgss::krb5::Krb5MechFactory;
using $Krb5NameElement = ::sun::security::jgss::krb5::Krb5NameElement;
using $Krb5ProxyCredential = ::sun::security::jgss::krb5::Krb5ProxyCredential;
using $Krb5Util = ::sun::security::jgss::krb5::Krb5Util;
using $MessageToken = ::sun::security::jgss::krb5::MessageToken;
using $MessageToken_v2 = ::sun::security::jgss::krb5::MessageToken_v2;
using $MicToken = ::sun::security::jgss::krb5::MicToken;
using $MicToken_v2 = ::sun::security::jgss::krb5::MicToken_v2;
using $WrapToken = ::sun::security::jgss::krb5::WrapToken;
using $WrapToken_v2 = ::sun::security::jgss::krb5::WrapToken_v2;
using $GSSCredentialSpi = ::sun::security::jgss::spi::GSSCredentialSpi;
using $GSSNameSpi = ::sun::security::jgss::spi::GSSNameSpi;
using $Credentials = ::sun::security::krb5::Credentials;
using $EncryptionKey = ::sun::security::krb5::EncryptionKey;
using $KrbApReq = ::sun::security::krb5::KrbApReq;
using $KrbCred = ::sun::security::krb5::KrbCred;
using $KrbException = ::sun::security::krb5::KrbException;
using $PrincipalName = ::sun::security::krb5::PrincipalName;
using $AuthorizationData = ::sun::security::krb5::internal::AuthorizationData;
using $Ticket = ::sun::security::krb5::internal::Ticket;
using $HexDumpEncoder = ::sun::security::util::HexDumpEncoder;

namespace sun {
	namespace security {
		namespace jgss {
			namespace krb5 {

$FieldInfo _Krb5Context_FieldInfo_[] = {
	{"STATE_NEW", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Krb5Context, STATE_NEW)},
	{"STATE_IN_PROCESS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Krb5Context, STATE_IN_PROCESS)},
	{"STATE_DONE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Krb5Context, STATE_DONE)},
	{"STATE_DELETED", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Krb5Context, STATE_DELETED)},
	{"state", "I", nullptr, $PRIVATE, $field(Krb5Context, state)},
	{"SESSION_KEY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Krb5Context, SESSION_KEY)},
	{"INITIATOR_SUBKEY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Krb5Context, INITIATOR_SUBKEY)},
	{"ACCEPTOR_SUBKEY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Krb5Context, ACCEPTOR_SUBKEY)},
	{"credDelegState", "Z", nullptr, $PRIVATE, $field(Krb5Context, credDelegState)},
	{"mutualAuthState", "Z", nullptr, $PRIVATE, $field(Krb5Context, mutualAuthState)},
	{"replayDetState", "Z", nullptr, $PRIVATE, $field(Krb5Context, replayDetState)},
	{"sequenceDetState", "Z", nullptr, $PRIVATE, $field(Krb5Context, sequenceDetState)},
	{"confState", "Z", nullptr, $PRIVATE, $field(Krb5Context, confState)},
	{"integState", "Z", nullptr, $PRIVATE, $field(Krb5Context, integState)},
	{"delegPolicyState", "Z", nullptr, $PRIVATE, $field(Krb5Context, delegPolicyState)},
	{"isConstrainedDelegationTried", "Z", nullptr, $PRIVATE, $field(Krb5Context, isConstrainedDelegationTried)},
	{"mySeqNumber", "I", nullptr, $PRIVATE, $field(Krb5Context, mySeqNumber)},
	{"peerSeqNumber", "I", nullptr, $PRIVATE, $field(Krb5Context, peerSeqNumber)},
	{"keySrc", "I", nullptr, $PRIVATE, $field(Krb5Context, keySrc)},
	{"peerTokenTracker", "Lsun/security/jgss/TokenTracker;", nullptr, $PRIVATE, $field(Krb5Context, peerTokenTracker)},
	{"cipherHelper", "Lsun/security/jgss/krb5/CipherHelper;", nullptr, $PRIVATE, $field(Krb5Context, cipherHelper)},
	{"mySeqNumberLock", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(Krb5Context, mySeqNumberLock)},
	{"peerSeqNumberLock", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(Krb5Context, peerSeqNumberLock)},
	{"key", "Lsun/security/krb5/EncryptionKey;", nullptr, $PRIVATE, $field(Krb5Context, key)},
	{"myName", "Lsun/security/jgss/krb5/Krb5NameElement;", nullptr, $PRIVATE, $field(Krb5Context, myName)},
	{"peerName", "Lsun/security/jgss/krb5/Krb5NameElement;", nullptr, $PRIVATE, $field(Krb5Context, peerName)},
	{"lifetime", "I", nullptr, $PRIVATE, $field(Krb5Context, lifetime)},
	{"initiator", "Z", nullptr, $PRIVATE, $field(Krb5Context, initiator)},
	{"channelBinding", "Lorg/ietf/jgss/ChannelBinding;", nullptr, $PRIVATE, $field(Krb5Context, channelBinding)},
	{"myCred", "Lsun/security/jgss/krb5/Krb5CredElement;", nullptr, $PRIVATE, $field(Krb5Context, myCred)},
	{"delegatedCred", "Lsun/security/jgss/krb5/Krb5CredElement;", nullptr, $PRIVATE, $field(Krb5Context, delegatedCred)},
	{"tgt", "Lsun/security/krb5/Credentials;", nullptr, $PRIVATE, $field(Krb5Context, tgt)},
	{"serviceCreds", "Lsun/security/krb5/Credentials;", nullptr, $PRIVATE, $field(Krb5Context, serviceCreds)},
	{"apReq", "Lsun/security/krb5/KrbApReq;", nullptr, $PRIVATE, $field(Krb5Context, apReq)},
	{"serviceTicket", "Lsun/security/krb5/internal/Ticket;", nullptr, 0, $field(Krb5Context, serviceTicket)},
	{"caller", "Lsun/security/jgss/GSSCaller;", nullptr, $PRIVATE | $FINAL, $field(Krb5Context, caller)},
	{"DEBUG", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Krb5Context, DEBUG)},
	{"tktFlags", "[Z", nullptr, $PRIVATE, $field(Krb5Context, tktFlags)},
	{"authTime", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Krb5Context, authTime)},
	{"authzData", "Lsun/security/krb5/internal/AuthorizationData;", nullptr, $PRIVATE, $field(Krb5Context, authzData)},
	{}
};

$MethodInfo _Krb5Context_MethodInfo_[] = {
	{"<init>", "(Lsun/security/jgss/GSSCaller;Lsun/security/jgss/krb5/Krb5NameElement;Lsun/security/jgss/krb5/Krb5CredElement;I)V", nullptr, 0, $method(Krb5Context, init$, void, $GSSCaller*, $Krb5NameElement*, $Krb5CredElement*, int32_t), "org.ietf.jgss.GSSException"},
	{"<init>", "(Lsun/security/jgss/GSSCaller;Lsun/security/jgss/krb5/Krb5CredElement;)V", nullptr, 0, $method(Krb5Context, init$, void, $GSSCaller*, $Krb5CredElement*), "org.ietf.jgss.GSSException"},
	{"<init>", "(Lsun/security/jgss/GSSCaller;[B)V", nullptr, $PUBLIC, $method(Krb5Context, init$, void, $GSSCaller*, $bytes*), "org.ietf.jgss.GSSException"},
	{"acceptSecContext", "(Ljava/io/InputStream;I)[B", nullptr, $PUBLIC | $FINAL, $virtualMethod(Krb5Context, acceptSecContext, $bytes*, $InputStream*, int32_t), "org.ietf.jgss.GSSException"},
	{"checkPermission", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(Krb5Context, checkPermission, void, $String*, $String*)},
	{"dispose", "()V", nullptr, $PUBLIC | $FINAL, $virtualMethod(Krb5Context, dispose, void), "org.ietf.jgss.GSSException"},
	{"export", "()[B", nullptr, $PUBLIC | $FINAL, $virtualMethod(Krb5Context, export$, $bytes*), "org.ietf.jgss.GSSException"},
	{"getAnonymityState", "()Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(Krb5Context, getAnonymityState, bool)},
	{"getCaller", "()Lsun/security/jgss/GSSCaller;", nullptr, 0, $virtualMethod(Krb5Context, getCaller, $GSSCaller*)},
	{"getChannelBinding", "()Lorg/ietf/jgss/ChannelBinding;", nullptr, $FINAL, $method(Krb5Context, getChannelBinding, $ChannelBinding*)},
	{"getCipherHelper", "(Lsun/security/krb5/EncryptionKey;)Lsun/security/jgss/krb5/CipherHelper;", nullptr, $FINAL, $method(Krb5Context, getCipherHelper, $CipherHelper*, $EncryptionKey*), "org.ietf.jgss.GSSException"},
	{"getConfState", "()Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(Krb5Context, getConfState, bool)},
	{"getCredDelegState", "()Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(Krb5Context, getCredDelegState, bool)},
	{"getDelegCred", "()Lsun/security/jgss/spi/GSSCredentialSpi;", nullptr, $PUBLIC | $FINAL, $virtualMethod(Krb5Context, getDelegCred, $GSSCredentialSpi*), "org.ietf.jgss.GSSException"},
	{"getDelegPolicyState", "()Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(Krb5Context, getDelegPolicyState, bool)},
	{"getHexBytes", "([BII)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(Krb5Context, getHexBytes, $String*, $bytes*, int32_t, int32_t)},
	{"getIntegState", "()Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(Krb5Context, getIntegState, bool)},
	{"getKey", "()Lsun/security/krb5/EncryptionKey;", nullptr, $PRIVATE | $FINAL, $method(Krb5Context, getKey, $EncryptionKey*)},
	{"getKeySrc", "()I", nullptr, $PUBLIC | $FINAL, $method(Krb5Context, getKeySrc, int32_t)},
	{"getLifetime", "()I", nullptr, $PUBLIC | $FINAL, $virtualMethod(Krb5Context, getLifetime, int32_t)},
	{"getMIC", "([BIILorg/ietf/jgss/MessageProp;)[B", nullptr, $PUBLIC | $FINAL, $virtualMethod(Krb5Context, getMIC, $bytes*, $bytes*, int32_t, int32_t, $MessageProp*), "org.ietf.jgss.GSSException"},
	{"getMIC", "([BII[BILorg/ietf/jgss/MessageProp;)I", nullptr, $PRIVATE, $method(Krb5Context, getMIC, int32_t, $bytes*, int32_t, int32_t, $bytes*, int32_t, $MessageProp*), "org.ietf.jgss.GSSException"},
	{"getMIC", "([BIILjava/io/OutputStream;Lorg/ietf/jgss/MessageProp;)V", nullptr, $PRIVATE, $method(Krb5Context, getMIC, void, $bytes*, int32_t, int32_t, $OutputStream*, $MessageProp*), "org.ietf.jgss.GSSException"},
	{"getMIC", "(Ljava/io/InputStream;Ljava/io/OutputStream;Lorg/ietf/jgss/MessageProp;)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(Krb5Context, getMIC, void, $InputStream*, $OutputStream*, $MessageProp*), "org.ietf.jgss.GSSException"},
	{"getMech", "()Lorg/ietf/jgss/Oid;", nullptr, $PUBLIC | $FINAL, $virtualMethod(Krb5Context, getMech, $Oid*)},
	{"getMutualAuthState", "()Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(Krb5Context, getMutualAuthState, bool)},
	{"getProvider", "()Ljava/security/Provider;", nullptr, $PUBLIC | $FINAL, $virtualMethod(Krb5Context, getProvider, $Provider*)},
	{"getReplayDetState", "()Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(Krb5Context, getReplayDetState, bool)},
	{"getSequenceDetState", "()Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(Krb5Context, getSequenceDetState, bool)},
	{"getSrcName", "()Lsun/security/jgss/spi/GSSNameSpi;", nullptr, $PUBLIC | $FINAL, $virtualMethod(Krb5Context, getSrcName, $GSSNameSpi*), "org.ietf.jgss.GSSException"},
	{"getTargName", "()Lsun/security/jgss/spi/GSSNameSpi;", nullptr, $PUBLIC | $FINAL, $virtualMethod(Krb5Context, getTargName, $GSSNameSpi*), "org.ietf.jgss.GSSException"},
	{"getWrapSizeLimit", "(IZI)I", nullptr, $PUBLIC | $FINAL, $virtualMethod(Krb5Context, getWrapSizeLimit, int32_t, int32_t, bool, int32_t), "org.ietf.jgss.GSSException"},
	{"incrementMySequenceNumber", "()I", nullptr, $FINAL, $method(Krb5Context, incrementMySequenceNumber, int32_t)},
	{"initSecContext", "(Ljava/io/InputStream;I)[B", nullptr, $PUBLIC | $FINAL, $virtualMethod(Krb5Context, initSecContext, $bytes*, $InputStream*, int32_t), "org.ietf.jgss.GSSException"},
	{"inquireSecContext", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Krb5Context, inquireSecContext, $Object*, $String*), "org.ietf.jgss.GSSException"},
	{"isEstablished", "()Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(Krb5Context, isEstablished, bool)},
	{"isInitiator", "()Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(Krb5Context, isInitiator, bool)},
	{"isProtReady", "()Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(Krb5Context, isProtReady, bool)},
	{"isTransferable", "()Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(Krb5Context, isTransferable, bool), "org.ietf.jgss.GSSException"},
	{"printState", "(I)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(Krb5Context, printState, $String*, int32_t)},
	{"requestAnonymity", "(Z)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(Krb5Context, requestAnonymity, void, bool), "org.ietf.jgss.GSSException"},
	{"requestConf", "(Z)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(Krb5Context, requestConf, void, bool), "org.ietf.jgss.GSSException"},
	{"requestCredDeleg", "(Z)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(Krb5Context, requestCredDeleg, void, bool), "org.ietf.jgss.GSSException"},
	{"requestDelegPolicy", "(Z)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(Krb5Context, requestDelegPolicy, void, bool)},
	{"requestInteg", "(Z)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(Krb5Context, requestInteg, void, bool), "org.ietf.jgss.GSSException"},
	{"requestLifetime", "(I)V", nullptr, $PUBLIC, $virtualMethod(Krb5Context, requestLifetime, void, int32_t), "org.ietf.jgss.GSSException"},
	{"requestMutualAuth", "(Z)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(Krb5Context, requestMutualAuth, void, bool), "org.ietf.jgss.GSSException"},
	{"requestReplayDet", "(Z)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(Krb5Context, requestReplayDet, void, bool), "org.ietf.jgss.GSSException"},
	{"requestSequenceDet", "(Z)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(Krb5Context, requestSequenceDet, void, bool), "org.ietf.jgss.GSSException"},
	{"resetMySequenceNumber", "(I)V", nullptr, $FINAL, $method(Krb5Context, resetMySequenceNumber, void, int32_t)},
	{"resetPeerSequenceNumber", "(I)V", nullptr, $FINAL, $method(Krb5Context, resetPeerSequenceNumber, void, int32_t)},
	{"setAuthTime", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(Krb5Context, setAuthTime, void, $String*)},
	{"setAuthzData", "(Lsun/security/krb5/internal/AuthorizationData;)V", nullptr, $PUBLIC, $virtualMethod(Krb5Context, setAuthzData, void, $AuthorizationData*)},
	{"setChannelBinding", "(Lorg/ietf/jgss/ChannelBinding;)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(Krb5Context, setChannelBinding, void, $ChannelBinding*), "org.ietf.jgss.GSSException"},
	{"setConfState", "(Z)V", nullptr, $FINAL, $method(Krb5Context, setConfState, void, bool)},
	{"setCredDelegState", "(Z)V", nullptr, $FINAL, $method(Krb5Context, setCredDelegState, void, bool)},
	{"setDelegCred", "(Lsun/security/jgss/krb5/Krb5CredElement;)V", nullptr, $FINAL, $method(Krb5Context, setDelegCred, void, $Krb5CredElement*)},
	{"setDelegPolicyState", "(Z)V", nullptr, $FINAL, $method(Krb5Context, setDelegPolicyState, void, bool)},
	{"setIntegState", "(Z)V", nullptr, $FINAL, $method(Krb5Context, setIntegState, void, bool)},
	{"setKey", "(ILsun/security/krb5/EncryptionKey;)V", nullptr, $FINAL, $method(Krb5Context, setKey, void, int32_t, $EncryptionKey*), "org.ietf.jgss.GSSException"},
	{"setMutualAuthState", "(Z)V", nullptr, $FINAL, $method(Krb5Context, setMutualAuthState, void, bool)},
	{"setReplayDetState", "(Z)V", nullptr, $FINAL, $method(Krb5Context, setReplayDetState, void, bool)},
	{"setSequenceDetState", "(Z)V", nullptr, $FINAL, $method(Krb5Context, setSequenceDetState, void, bool)},
	{"setSequencingAndReplayProps", "(Lsun/security/jgss/krb5/MessageToken;Lorg/ietf/jgss/MessageProp;)V", nullptr, $PRIVATE, $method(Krb5Context, setSequencingAndReplayProps, void, $MessageToken*, $MessageProp*)},
	{"setSequencingAndReplayProps", "(Lsun/security/jgss/krb5/MessageToken_v2;Lorg/ietf/jgss/MessageProp;)V", nullptr, $PRIVATE, $method(Krb5Context, setSequencingAndReplayProps, void, $MessageToken_v2*, $MessageProp*)},
	{"setTktFlags", "([Z)V", nullptr, $PUBLIC, $virtualMethod(Krb5Context, setTktFlags, void, $booleans*)},
	{"tryConstrainedDelegation", "()V", nullptr, $PRIVATE, $method(Krb5Context, tryConstrainedDelegation, void)},
	{"unwrap", "([BIILorg/ietf/jgss/MessageProp;)[B", nullptr, $PUBLIC | $FINAL, $virtualMethod(Krb5Context, unwrap, $bytes*, $bytes*, int32_t, int32_t, $MessageProp*), "org.ietf.jgss.GSSException"},
	{"unwrap", "([BII[BILorg/ietf/jgss/MessageProp;)I", nullptr, $PUBLIC | $FINAL, $method(Krb5Context, unwrap, int32_t, $bytes*, int32_t, int32_t, $bytes*, int32_t, $MessageProp*), "org.ietf.jgss.GSSException"},
	{"unwrap", "(Ljava/io/InputStream;[BILorg/ietf/jgss/MessageProp;)I", nullptr, $PUBLIC | $FINAL, $method(Krb5Context, unwrap, int32_t, $InputStream*, $bytes*, int32_t, $MessageProp*), "org.ietf.jgss.GSSException"},
	{"unwrap", "(Ljava/io/InputStream;Ljava/io/OutputStream;Lorg/ietf/jgss/MessageProp;)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(Krb5Context, unwrap, void, $InputStream*, $OutputStream*, $MessageProp*), "org.ietf.jgss.GSSException"},
	{"verifyMIC", "([BII[BIILorg/ietf/jgss/MessageProp;)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(Krb5Context, verifyMIC, void, $bytes*, int32_t, int32_t, $bytes*, int32_t, int32_t, $MessageProp*), "org.ietf.jgss.GSSException"},
	{"verifyMIC", "(Ljava/io/InputStream;[BIILorg/ietf/jgss/MessageProp;)V", nullptr, $PRIVATE, $method(Krb5Context, verifyMIC, void, $InputStream*, $bytes*, int32_t, int32_t, $MessageProp*), "org.ietf.jgss.GSSException"},
	{"verifyMIC", "(Ljava/io/InputStream;Ljava/io/InputStream;Lorg/ietf/jgss/MessageProp;)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(Krb5Context, verifyMIC, void, $InputStream*, $InputStream*, $MessageProp*), "org.ietf.jgss.GSSException"},
	{"wrap", "([BIILorg/ietf/jgss/MessageProp;)[B", nullptr, $PUBLIC | $FINAL, $virtualMethod(Krb5Context, wrap, $bytes*, $bytes*, int32_t, int32_t, $MessageProp*), "org.ietf.jgss.GSSException"},
	{"wrap", "([BII[BILorg/ietf/jgss/MessageProp;)I", nullptr, $PUBLIC | $FINAL, $method(Krb5Context, wrap, int32_t, $bytes*, int32_t, int32_t, $bytes*, int32_t, $MessageProp*), "org.ietf.jgss.GSSException"},
	{"wrap", "([BIILjava/io/OutputStream;Lorg/ietf/jgss/MessageProp;)V", nullptr, $PUBLIC | $FINAL, $method(Krb5Context, wrap, void, $bytes*, int32_t, int32_t, $OutputStream*, $MessageProp*), "org.ietf.jgss.GSSException"},
	{"wrap", "(Ljava/io/InputStream;Ljava/io/OutputStream;Lorg/ietf/jgss/MessageProp;)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(Krb5Context, wrap, void, $InputStream*, $OutputStream*, $MessageProp*), "org.ietf.jgss.GSSException"},
	{}
};

$InnerClassInfo _Krb5Context_InnerClassesInfo_[] = {
	{"sun.security.jgss.krb5.Krb5Context$KerberosSessionKey", "sun.security.jgss.krb5.Krb5Context", "KerberosSessionKey", $STATIC},
	{"sun.security.jgss.krb5.Krb5Context$3", nullptr, nullptr, 0},
	{"sun.security.jgss.krb5.Krb5Context$2", nullptr, nullptr, 0},
	{"sun.security.jgss.krb5.Krb5Context$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Krb5Context_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.jgss.krb5.Krb5Context",
	"java.lang.Object",
	"sun.security.jgss.spi.GSSContextSpi",
	_Krb5Context_FieldInfo_,
	_Krb5Context_MethodInfo_,
	nullptr,
	nullptr,
	_Krb5Context_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.security.jgss.krb5.Krb5Context$KerberosSessionKey,sun.security.jgss.krb5.Krb5Context$3,sun.security.jgss.krb5.Krb5Context$2,sun.security.jgss.krb5.Krb5Context$1"
};

$Object* allocate$Krb5Context($Class* clazz) {
	return $of($alloc(Krb5Context));
}

bool Krb5Context::DEBUG = false;

void Krb5Context::init$($GSSCaller* caller, $Krb5NameElement* peerName, $Krb5CredElement* myCred, int32_t lifetime) {
	this->state = Krb5Context::STATE_NEW;
	this->credDelegState = false;
	this->mutualAuthState = true;
	this->replayDetState = true;
	this->sequenceDetState = true;
	this->confState = true;
	this->integState = true;
	this->delegPolicyState = false;
	this->isConstrainedDelegationTried = false;
	$set(this, cipherHelper, nullptr);
	$set(this, mySeqNumberLock, $new($Object));
	$set(this, peerSeqNumberLock, $new($Object));
	if (peerName == nullptr) {
		$throwNew($IllegalArgumentException, "Cannot have null peer name"_s);
	}
	$set(this, caller, caller);
	$set(this, peerName, peerName);
	$set(this, myCred, myCred);
	this->lifetime = lifetime;
	this->initiator = true;
}

void Krb5Context::init$($GSSCaller* caller, $Krb5CredElement* myCred) {
	this->state = Krb5Context::STATE_NEW;
	this->credDelegState = false;
	this->mutualAuthState = true;
	this->replayDetState = true;
	this->sequenceDetState = true;
	this->confState = true;
	this->integState = true;
	this->delegPolicyState = false;
	this->isConstrainedDelegationTried = false;
	$set(this, cipherHelper, nullptr);
	$set(this, mySeqNumberLock, $new($Object));
	$set(this, peerSeqNumberLock, $new($Object));
	$set(this, caller, caller);
	$set(this, myCred, myCred);
	this->initiator = false;
}

void Krb5Context::init$($GSSCaller* caller, $bytes* interProcessToken) {
	this->state = Krb5Context::STATE_NEW;
	this->credDelegState = false;
	this->mutualAuthState = true;
	this->replayDetState = true;
	this->sequenceDetState = true;
	this->confState = true;
	this->integState = true;
	this->delegPolicyState = false;
	this->isConstrainedDelegationTried = false;
	$set(this, cipherHelper, nullptr);
	$set(this, mySeqNumberLock, $new($Object));
	$set(this, peerSeqNumberLock, $new($Object));
	$throwNew($GSSException, $GSSException::UNAVAILABLE, -1, "GSS Import Context not available"_s);
}

bool Krb5Context::isTransferable() {
	return false;
}

int32_t Krb5Context::getLifetime() {
	return $GSSContext::INDEFINITE_LIFETIME;
}

void Krb5Context::requestLifetime(int32_t lifetime) {
	if (this->state == Krb5Context::STATE_NEW && isInitiator()) {
		this->lifetime = lifetime;
	}
}

void Krb5Context::requestConf(bool value) {
	if (this->state == Krb5Context::STATE_NEW && isInitiator()) {
		this->confState = value;
	}
}

bool Krb5Context::getConfState() {
	return this->confState;
}

void Krb5Context::requestInteg(bool value) {
	if (this->state == Krb5Context::STATE_NEW && isInitiator()) {
		this->integState = value;
	}
}

bool Krb5Context::getIntegState() {
	return this->integState;
}

void Krb5Context::requestCredDeleg(bool value) {
	if (this->state == Krb5Context::STATE_NEW && isInitiator()) {
		if (this->myCred == nullptr || !($instanceOf($Krb5ProxyCredential, this->myCred))) {
			this->credDelegState = value;
		}
	}
}

bool Krb5Context::getCredDelegState() {
	if (isInitiator()) {
		return this->credDelegState;
	} else {
		tryConstrainedDelegation();
		return this->delegatedCred != nullptr;
	}
}

void Krb5Context::requestMutualAuth(bool value) {
	if (this->state == Krb5Context::STATE_NEW && isInitiator()) {
		this->mutualAuthState = value;
	}
}

bool Krb5Context::getMutualAuthState() {
	return this->mutualAuthState;
}

void Krb5Context::requestReplayDet(bool value) {
	if (this->state == Krb5Context::STATE_NEW && isInitiator()) {
		this->replayDetState = value;
	}
}

bool Krb5Context::getReplayDetState() {
	return this->replayDetState || this->sequenceDetState;
}

void Krb5Context::requestSequenceDet(bool value) {
	if (this->state == Krb5Context::STATE_NEW && isInitiator()) {
		this->sequenceDetState = value;
	}
}

bool Krb5Context::getSequenceDetState() {
	return this->sequenceDetState || this->replayDetState;
}

void Krb5Context::requestDelegPolicy(bool value) {
	if (this->state == Krb5Context::STATE_NEW && isInitiator()) {
		this->delegPolicyState = value;
	}
}

bool Krb5Context::getDelegPolicyState() {
	return this->delegPolicyState;
}

void Krb5Context::requestAnonymity(bool value) {
}

bool Krb5Context::getAnonymityState() {
	return false;
}

$CipherHelper* Krb5Context::getCipherHelper($EncryptionKey* ckey) {
	$var($EncryptionKey, cipherKey, nullptr);
	if (this->cipherHelper == nullptr) {
		$assign(cipherKey, (getKey() == nullptr) ? ckey : getKey());
		$set(this, cipherHelper, $new($CipherHelper, cipherKey));
	}
	return this->cipherHelper;
}

int32_t Krb5Context::incrementMySequenceNumber() {
	int32_t retVal = 0;
	$synchronized(this->mySeqNumberLock) {
		retVal = this->mySeqNumber;
		this->mySeqNumber = retVal + 1;
	}
	return retVal;
}

void Krb5Context::resetMySequenceNumber(int32_t seqNumber) {
	$useLocalCurrentObjectStackCache();
	if (Krb5Context::DEBUG) {
		$nc($System::out)->println($$str({"Krb5Context setting mySeqNumber to: "_s, $$str(seqNumber)}));
	}
	$synchronized(this->mySeqNumberLock) {
		this->mySeqNumber = seqNumber;
	}
}

void Krb5Context::resetPeerSequenceNumber(int32_t seqNumber) {
	$useLocalCurrentObjectStackCache();
	if (Krb5Context::DEBUG) {
		$nc($System::out)->println($$str({"Krb5Context setting peerSeqNumber to: "_s, $$str(seqNumber)}));
	}
	$synchronized(this->peerSeqNumberLock) {
		this->peerSeqNumber = seqNumber;
		$set(this, peerTokenTracker, $new($TokenTracker, this->peerSeqNumber));
	}
}

void Krb5Context::setKey(int32_t keySrc, $EncryptionKey* key) {
	$set(this, key, key);
	this->keySrc = keySrc;
	$set(this, cipherHelper, $new($CipherHelper, key));
}

int32_t Krb5Context::getKeySrc() {
	return this->keySrc;
}

$EncryptionKey* Krb5Context::getKey() {
	return this->key;
}

void Krb5Context::setDelegCred($Krb5CredElement* delegatedCred) {
	$set(this, delegatedCred, delegatedCred);
}

void Krb5Context::setCredDelegState(bool state) {
	this->credDelegState = state;
}

void Krb5Context::setMutualAuthState(bool state) {
	this->mutualAuthState = state;
}

void Krb5Context::setReplayDetState(bool state) {
	this->replayDetState = state;
}

void Krb5Context::setSequenceDetState(bool state) {
	this->sequenceDetState = state;
}

void Krb5Context::setConfState(bool state) {
	this->confState = state;
}

void Krb5Context::setIntegState(bool state) {
	this->integState = state;
}

void Krb5Context::setDelegPolicyState(bool state) {
	this->delegPolicyState = state;
}

void Krb5Context::setChannelBinding($ChannelBinding* channelBinding) {
	$set(this, channelBinding, channelBinding);
}

$ChannelBinding* Krb5Context::getChannelBinding() {
	return this->channelBinding;
}

$Oid* Krb5Context::getMech() {
	$init($Krb5MechFactory);
	return ($Krb5MechFactory::GSS_KRB5_MECH_OID);
}

$GSSNameSpi* Krb5Context::getSrcName() {
	return (isInitiator() ? static_cast<$GSSNameSpi*>(this->myName) : static_cast<$GSSNameSpi*>(this->peerName));
}

$GSSNameSpi* Krb5Context::getTargName() {
	return (!isInitiator() ? static_cast<$GSSNameSpi*>(this->myName) : static_cast<$GSSNameSpi*>(this->peerName));
}

$GSSCredentialSpi* Krb5Context::getDelegCred() {
	if (this->state != Krb5Context::STATE_IN_PROCESS && this->state != Krb5Context::STATE_DONE) {
		$throwNew($GSSException, $GSSException::NO_CONTEXT);
	}
	if (isInitiator()) {
		$throwNew($GSSException, $GSSException::NO_CRED);
	}
	tryConstrainedDelegation();
	if (this->delegatedCred == nullptr) {
		$throwNew($GSSException, $GSSException::NO_CRED);
	}
	return this->delegatedCred;
}

void Krb5Context::tryConstrainedDelegation() {
	$useLocalCurrentObjectStackCache();
	if (this->state != Krb5Context::STATE_IN_PROCESS && this->state != Krb5Context::STATE_DONE) {
		return;
	}
	if (!this->isConstrainedDelegationTried) {
		if (this->delegatedCred == nullptr) {
			if (Krb5Context::DEBUG) {
				$nc($System::out)->println($$str({">>> Constrained deleg from "_s, this->caller}));
			}
			try {
				$init($GSSCaller);
				$set(this, delegatedCred, $new($Krb5ProxyCredential, $($Krb5InitCredential::getInstance($GSSCaller::CALLER_ACCEPT, this->myName, this->lifetime)), this->peerName, this->serviceTicket));
			} catch ($GSSException& gsse) {
			}
		}
		this->isConstrainedDelegationTried = true;
	}
}

bool Krb5Context::isInitiator() {
	return this->initiator;
}

bool Krb5Context::isProtReady() {
	return (this->state == Krb5Context::STATE_DONE);
}

$bytes* Krb5Context::initSecContext($InputStream* is, int32_t mechTokenSize) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($bytes, retVal, nullptr);
	$var($InitialToken, token, nullptr);
	int32_t errorCode = $GSSException::FAILURE;
	if (Krb5Context::DEBUG) {
		$nc($System::out)->println($$str({"Entered Krb5Context.initSecContext with state="_s, $(printState(this->state))}));
	}
	if (!isInitiator()) {
		$throwNew($GSSException, $GSSException::FAILURE, -1, "initSecContext on an acceptor GSSContext"_s);
	}
	try {
		if (this->state == Krb5Context::STATE_NEW) {
			this->state = Krb5Context::STATE_IN_PROCESS;
			errorCode = $GSSException::NO_CRED;
			if (this->myCred == nullptr) {
				$set(this, myCred, $Krb5InitCredential::getInstance(this->caller, this->myName, $GSSCredential::DEFAULT_LIFETIME));
				$set(this, myCred, $Krb5ProxyCredential::tryImpersonation(this->caller, $cast($Krb5InitCredential, this->myCred)));
			} else if (!$nc(this->myCred)->isInitiatorCredential()) {
				$throwNew($GSSException, errorCode, -1, "No TGT available"_s);
			}
			$set(this, myName, $cast($Krb5NameElement, $nc(this->myCred)->getName()));
			$var($Krb5ProxyCredential, second, nullptr);
			if ($instanceOf($Krb5InitCredential, this->myCred)) {
				$assign(second, nullptr);
				$set(this, tgt, $nc(($cast($Krb5InitCredential, this->myCred)))->getKrb5Credentials());
			} else {
				$assign(second, $cast($Krb5ProxyCredential, this->myCred));
				$set(this, tgt, $nc($nc(second)->self)->getKrb5Credentials());
			}
			checkPermission($($nc($($nc(this->peerName)->getKrb5PrincipalName()))->getName()), "initiate"_s);
			$var($AccessControlContext, acc, $AccessController::getContext());
			if ($GSSUtil::useSubjectCredsOnly(this->caller)) {
				$var($KerberosTicket, kerbTicket, nullptr);
				try {
					$var($KerberosTicket, tmp, $cast($KerberosTicket, $AccessController::doPrivileged(static_cast<$PrivilegedExceptionAction*>($$new($Krb5Context$1, this, second, acc)))));
					$assign(kerbTicket, tmp);
				} catch ($PrivilegedActionException& e) {
					if (Krb5Context::DEBUG) {
						$nc($System::out)->println("Attempt to obtain service ticket from the subject failed!"_s);
					}
				}
				if (kerbTicket != nullptr) {
					if (Krb5Context::DEBUG) {
						$nc($System::out)->println($$str({"Found service ticket in the subject"_s, kerbTicket}));
					}
					$set(this, serviceCreds, $Krb5Util::ticketToCreds(kerbTicket));
				}
			}
			if (this->serviceCreds == nullptr) {
				if (Krb5Context::DEBUG) {
					$nc($System::out)->println("Service ticket not found in the subject"_s);
				}
				if (second == nullptr) {
					$set(this, serviceCreds, $Credentials::acquireServiceCreds($($nc($($nc(this->peerName)->getKrb5PrincipalName()))->getName()), this->tgt));
				} else {
					$var($String, var$0, $nc($($nc(this->peerName)->getKrb5PrincipalName()))->getName());
					$var($Ticket, var$1, $nc(second)->tkt);
					$set(this, serviceCreds, $Credentials::acquireS4U2proxyCreds(var$0, var$1, $($nc($($cast($Krb5NameElement, second->getName())))->getKrb5PrincipalName()), this->tgt));
				}
				if ($GSSUtil::useSubjectCredsOnly(this->caller)) {
					$var($Subject, subject, $cast($Subject, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($Krb5Context$2, this, acc)))));
					if (subject != nullptr && !subject->isReadOnly()) {
						$var($KerberosTicket, kt, $Krb5Util::credsToTicket(this->serviceCreds));
						$var($Void, dummy, $cast($Void, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($Krb5Context$3, this, subject, kt)))));
					} else if (Krb5Context::DEBUG) {
						$nc($System::out)->println("Subject is readOnly;Kerberos Service ticket not stored"_s);
					}
				}
			}
			errorCode = $GSSException::FAILURE;
			$assign(token, $new($InitSecContextToken, this, this->tgt, this->serviceCreds));
			$set(this, apReq, $nc(($cast($InitSecContextToken, token)))->getKrbApReq());
			$assign(retVal, token->encode());
			$set(this, myCred, nullptr);
			if (!getMutualAuthState()) {
				this->state = Krb5Context::STATE_DONE;
			}
			if (Krb5Context::DEBUG) {
				$nc($System::out)->println($$str({"Created InitSecContextToken:\n"_s, $($$new($HexDumpEncoder)->encodeBuffer(retVal))}));
			}
		} else if (this->state == Krb5Context::STATE_IN_PROCESS) {
			$new($AcceptSecContextToken, this, this->serviceCreds, this->apReq, is);
			$set(this, apReq, nullptr);
			this->state = Krb5Context::STATE_DONE;
		} else if (Krb5Context::DEBUG) {
			$nc($System::out)->println(this->state);
		}
	} catch ($KrbException& e) {
		if (Krb5Context::DEBUG) {
			e->printStackTrace();
		}
		$var($GSSException, gssException, $new($GSSException, errorCode, -1, $(e->getMessage())));
		gssException->initCause(e);
		$throw(gssException);
	} catch ($IOException& e) {
		$var($GSSException, gssException, $new($GSSException, errorCode, -1, $(e->getMessage())));
		gssException->initCause(e);
		$throw(gssException);
	}
	return retVal;
}

bool Krb5Context::isEstablished() {
	return (this->state == Krb5Context::STATE_DONE);
}

$bytes* Krb5Context::acceptSecContext($InputStream* is, int32_t mechTokenSize) {
	$useLocalCurrentObjectStackCache();
	$var($bytes, retVal, nullptr);
	if (Krb5Context::DEBUG) {
		$nc($System::out)->println($$str({"Entered Krb5Context.acceptSecContext with state="_s, $(printState(this->state))}));
	}
	if (isInitiator()) {
		$throwNew($GSSException, $GSSException::FAILURE, -1, "acceptSecContext on an initiator GSSContext"_s);
	}
	try {
		if (this->state == Krb5Context::STATE_NEW) {
			this->state = Krb5Context::STATE_IN_PROCESS;
			if (this->myCred == nullptr) {
				$set(this, myCred, $Krb5AcceptCredential::getInstance(this->caller, this->myName));
			} else if (!$nc(this->myCred)->isAcceptorCredential()) {
				$throwNew($GSSException, $GSSException::NO_CRED, -1, "No Secret Key available"_s);
			}
			$set(this, myName, $cast($Krb5NameElement, $nc(this->myCred)->getName()));
			if (this->myName != nullptr) {
				$Krb5MechFactory::checkAcceptCredPermission(this->myName, this->myName);
			}
			$var($InitSecContextToken, token, $new($InitSecContextToken, this, $cast($Krb5AcceptCredential, this->myCred), is));
			$var($PrincipalName, clientName, $nc($(token->getKrbApReq()))->getClient());
			$set(this, peerName, $Krb5NameElement::getInstance(clientName));
			if (this->myName == nullptr) {
				$set(this, myName, $Krb5NameElement::getInstance($($nc($($nc($(token->getKrbApReq()))->getCreds()))->getServer())));
				$Krb5MechFactory::checkAcceptCredPermission(this->myName, this->myName);
			}
			if (getMutualAuthState()) {
				$assign(retVal, $$new($AcceptSecContextToken, this, $(token->getKrbApReq()))->encode());
			}
			$set(this, serviceTicket, $nc($($nc($(token->getKrbApReq()))->getCreds()))->getTicket());
			$set(this, myCred, nullptr);
			this->state = Krb5Context::STATE_DONE;
		} else if (Krb5Context::DEBUG) {
			$nc($System::out)->println(this->state);
		}
	} catch ($KrbException& e) {
		$var($GSSException, gssException, $new($GSSException, $GSSException::FAILURE, -1, $(e->getMessage())));
		gssException->initCause(e);
		$throw(gssException);
	} catch ($IOException& e) {
		if (Krb5Context::DEBUG) {
			e->printStackTrace();
		}
		$var($GSSException, gssException, $new($GSSException, $GSSException::FAILURE, -1, $(e->getMessage())));
		gssException->initCause(e);
		$throw(gssException);
	}
	return retVal;
}

int32_t Krb5Context::getWrapSizeLimit(int32_t qop, bool confReq, int32_t maxTokSize) {
	$useLocalCurrentObjectStackCache();
	int32_t retVal = 0;
	if ($nc(this->cipherHelper)->getProto() == 0) {
		retVal = $WrapToken::getSizeLimit(qop, confReq, maxTokSize, $(getCipherHelper(nullptr)));
	} else if ($nc(this->cipherHelper)->getProto() == 1) {
		retVal = $WrapToken_v2::getSizeLimit(qop, confReq, maxTokSize, $(getCipherHelper(nullptr)));
	}
	return retVal;
}

$bytes* Krb5Context::wrap($bytes* inBuf, int32_t offset, int32_t len, $MessageProp* msgProp) {
	$useLocalCurrentObjectStackCache();
	if (Krb5Context::DEBUG) {
		$nc($System::out)->println($$str({"Krb5Context.wrap: data=["_s, $(getHexBytes(inBuf, offset, len)), "]"_s}));
	}
	if (this->state != Krb5Context::STATE_DONE) {
		$throwNew($GSSException, $GSSException::NO_CONTEXT, -1, "Wrap called in invalid state!"_s);
	}
	$var($bytes, encToken, nullptr);
	try {
		if ($nc(this->cipherHelper)->getProto() == 0) {
			$var($WrapToken, token, $new($WrapToken, this, msgProp, inBuf, offset, len));
			$assign(encToken, token->encode());
		} else if ($nc(this->cipherHelper)->getProto() == 1) {
			$var($WrapToken_v2, token, $new($WrapToken_v2, this, msgProp, inBuf, offset, len));
			$assign(encToken, token->encode());
		}
		if (Krb5Context::DEBUG) {
			$nc($System::out)->println($$str({"Krb5Context.wrap: token=["_s, $(getHexBytes(encToken, 0, $nc(encToken)->length)), "]"_s}));
		}
		return encToken;
	} catch ($IOException& e) {
		$assign(encToken, nullptr);
		$var($GSSException, gssException, $new($GSSException, $GSSException::FAILURE, -1, $(e->getMessage())));
		gssException->initCause(e);
		$throw(gssException);
	}
	$shouldNotReachHere();
}

int32_t Krb5Context::wrap($bytes* inBuf, int32_t inOffset, int32_t len, $bytes* outBuf, int32_t outOffset, $MessageProp* msgProp) {
	$useLocalCurrentObjectStackCache();
	if (this->state != Krb5Context::STATE_DONE) {
		$throwNew($GSSException, $GSSException::NO_CONTEXT, -1, "Wrap called in invalid state!"_s);
	}
	int32_t retVal = 0;
	try {
		if ($nc(this->cipherHelper)->getProto() == 0) {
			$var($WrapToken, token, $new($WrapToken, this, msgProp, inBuf, inOffset, len));
			retVal = token->encode(outBuf, outOffset);
		} else if ($nc(this->cipherHelper)->getProto() == 1) {
			$var($WrapToken_v2, token, $new($WrapToken_v2, this, msgProp, inBuf, inOffset, len));
			retVal = token->encode(outBuf, outOffset);
		}
		if (Krb5Context::DEBUG) {
			$nc($System::out)->println($$str({"Krb5Context.wrap: token=["_s, $(getHexBytes(outBuf, outOffset, retVal)), "]"_s}));
		}
		return retVal;
	} catch ($IOException& e) {
		retVal = 0;
		$var($GSSException, gssException, $new($GSSException, $GSSException::FAILURE, -1, $(e->getMessage())));
		gssException->initCause(e);
		$throw(gssException);
	}
	$shouldNotReachHere();
}

void Krb5Context::wrap($bytes* inBuf, int32_t offset, int32_t len, $OutputStream* os, $MessageProp* msgProp) {
	$useLocalCurrentObjectStackCache();
	if (this->state != Krb5Context::STATE_DONE) {
		$throwNew($GSSException, $GSSException::NO_CONTEXT, -1, "Wrap called in invalid state!"_s);
	}
	$var($bytes, encToken, nullptr);
	try {
		if ($nc(this->cipherHelper)->getProto() == 0) {
			$var($WrapToken, token, $new($WrapToken, this, msgProp, inBuf, offset, len));
			token->encode(os);
			if (Krb5Context::DEBUG) {
				$assign(encToken, token->encode());
			}
		} else if ($nc(this->cipherHelper)->getProto() == 1) {
			$var($WrapToken_v2, token, $new($WrapToken_v2, this, msgProp, inBuf, offset, len));
			token->encode(os);
			if (Krb5Context::DEBUG) {
				$assign(encToken, token->encode());
			}
		}
	} catch ($IOException& e) {
		$var($GSSException, gssException, $new($GSSException, $GSSException::FAILURE, -1, $(e->getMessage())));
		gssException->initCause(e);
		$throw(gssException);
	}
	if (Krb5Context::DEBUG) {
		$nc($System::out)->println($$str({"Krb5Context.wrap: token=["_s, $(getHexBytes(encToken, 0, $nc(encToken)->length)), "]"_s}));
	}
}

void Krb5Context::wrap($InputStream* is, $OutputStream* os, $MessageProp* msgProp) {
	$useLocalCurrentObjectStackCache();
	$var($bytes, data, nullptr);
	try {
		$assign(data, $new($bytes, $nc(is)->available()));
		is->read(data);
	} catch ($IOException& e) {
		$var($GSSException, gssException, $new($GSSException, $GSSException::FAILURE, -1, $(e->getMessage())));
		gssException->initCause(e);
		$throw(gssException);
	}
	wrap(data, 0, $nc(data)->length, os, msgProp);
}

$bytes* Krb5Context::unwrap($bytes* inBuf, int32_t offset, int32_t len, $MessageProp* msgProp) {
	$useLocalCurrentObjectStackCache();
	if (Krb5Context::DEBUG) {
		$nc($System::out)->println($$str({"Krb5Context.unwrap: token=["_s, $(getHexBytes(inBuf, offset, len)), "]"_s}));
	}
	if (this->state != Krb5Context::STATE_DONE) {
		$throwNew($GSSException, $GSSException::NO_CONTEXT, -1, " Unwrap called in invalid state!"_s);
	}
	$var($bytes, data, nullptr);
	if ($nc(this->cipherHelper)->getProto() == 0) {
		$var($WrapToken, token, $new($WrapToken, this, inBuf, offset, len, msgProp));
		$assign(data, token->getData());
		setSequencingAndReplayProps(static_cast<$MessageToken*>(token), msgProp);
	} else if ($nc(this->cipherHelper)->getProto() == 1) {
		$var($WrapToken_v2, token, $new($WrapToken_v2, this, inBuf, offset, len, msgProp));
		$assign(data, token->getData());
		setSequencingAndReplayProps(static_cast<$MessageToken_v2*>(token), msgProp);
	}
	if (Krb5Context::DEBUG) {
		$nc($System::out)->println($$str({"Krb5Context.unwrap: data=["_s, $(getHexBytes(data, 0, $nc(data)->length)), "]"_s}));
	}
	return data;
}

int32_t Krb5Context::unwrap($bytes* inBuf, int32_t inOffset, int32_t len, $bytes* outBuf, int32_t outOffset, $MessageProp* msgProp) {
	$useLocalCurrentObjectStackCache();
	if (this->state != Krb5Context::STATE_DONE) {
		$throwNew($GSSException, $GSSException::NO_CONTEXT, -1, "Unwrap called in invalid state!"_s);
	}
	if ($nc(this->cipherHelper)->getProto() == 0) {
		$var($WrapToken, token, $new($WrapToken, this, inBuf, inOffset, len, msgProp));
		len = token->getData(outBuf, outOffset);
		setSequencingAndReplayProps(static_cast<$MessageToken*>(token), msgProp);
	} else if ($nc(this->cipherHelper)->getProto() == 1) {
		$var($WrapToken_v2, token, $new($WrapToken_v2, this, inBuf, inOffset, len, msgProp));
		len = token->getData(outBuf, outOffset);
		setSequencingAndReplayProps(static_cast<$MessageToken_v2*>(token), msgProp);
	}
	return len;
}

int32_t Krb5Context::unwrap($InputStream* is, $bytes* outBuf, int32_t outOffset, $MessageProp* msgProp) {
	$useLocalCurrentObjectStackCache();
	if (this->state != Krb5Context::STATE_DONE) {
		$throwNew($GSSException, $GSSException::NO_CONTEXT, -1, "Unwrap called in invalid state!"_s);
	}
	int32_t len = 0;
	if ($nc(this->cipherHelper)->getProto() == 0) {
		$var($WrapToken, token, $new($WrapToken, this, is, msgProp));
		len = token->getData(outBuf, outOffset);
		setSequencingAndReplayProps(static_cast<$MessageToken*>(token), msgProp);
	} else if ($nc(this->cipherHelper)->getProto() == 1) {
		$var($WrapToken_v2, token, $new($WrapToken_v2, this, is, msgProp));
		len = token->getData(outBuf, outOffset);
		setSequencingAndReplayProps(static_cast<$MessageToken_v2*>(token), msgProp);
	}
	return len;
}

void Krb5Context::unwrap($InputStream* is, $OutputStream* os, $MessageProp* msgProp) {
	$useLocalCurrentObjectStackCache();
	if (this->state != Krb5Context::STATE_DONE) {
		$throwNew($GSSException, $GSSException::NO_CONTEXT, -1, "Unwrap called in invalid state!"_s);
	}
	$var($bytes, data, nullptr);
	if ($nc(this->cipherHelper)->getProto() == 0) {
		$var($WrapToken, token, $new($WrapToken, this, is, msgProp));
		$assign(data, token->getData());
		setSequencingAndReplayProps(static_cast<$MessageToken*>(token), msgProp);
	} else if ($nc(this->cipherHelper)->getProto() == 1) {
		$var($WrapToken_v2, token, $new($WrapToken_v2, this, is, msgProp));
		$assign(data, token->getData());
		setSequencingAndReplayProps(static_cast<$MessageToken_v2*>(token), msgProp);
	}
	try {
		$nc(os)->write(data);
	} catch ($IOException& e) {
		$var($GSSException, gssException, $new($GSSException, $GSSException::FAILURE, -1, $(e->getMessage())));
		gssException->initCause(e);
		$throw(gssException);
	}
}

$bytes* Krb5Context::getMIC($bytes* inMsg, int32_t offset, int32_t len, $MessageProp* msgProp) {
	$useLocalCurrentObjectStackCache();
	$var($bytes, micToken, nullptr);
	try {
		if ($nc(this->cipherHelper)->getProto() == 0) {
			$var($MicToken, token, $new($MicToken, this, msgProp, inMsg, offset, len));
			$assign(micToken, token->encode());
		} else if ($nc(this->cipherHelper)->getProto() == 1) {
			$var($MicToken_v2, token, $new($MicToken_v2, this, msgProp, inMsg, offset, len));
			$assign(micToken, token->encode());
		}
		return micToken;
	} catch ($IOException& e) {
		$assign(micToken, nullptr);
		$var($GSSException, gssException, $new($GSSException, $GSSException::FAILURE, -1, $(e->getMessage())));
		gssException->initCause(e);
		$throw(gssException);
	}
	$shouldNotReachHere();
}

int32_t Krb5Context::getMIC($bytes* inMsg, int32_t offset, int32_t len, $bytes* outBuf, int32_t outOffset, $MessageProp* msgProp) {
	$useLocalCurrentObjectStackCache();
	int32_t retVal = 0;
	try {
		if ($nc(this->cipherHelper)->getProto() == 0) {
			$var($MicToken, token, $new($MicToken, this, msgProp, inMsg, offset, len));
			retVal = token->encode(outBuf, outOffset);
		} else if ($nc(this->cipherHelper)->getProto() == 1) {
			$var($MicToken_v2, token, $new($MicToken_v2, this, msgProp, inMsg, offset, len));
			retVal = token->encode(outBuf, outOffset);
		}
		return retVal;
	} catch ($IOException& e) {
		retVal = 0;
		$var($GSSException, gssException, $new($GSSException, $GSSException::FAILURE, -1, $(e->getMessage())));
		gssException->initCause(e);
		$throw(gssException);
	}
	$shouldNotReachHere();
}

void Krb5Context::getMIC($bytes* inMsg, int32_t offset, int32_t len, $OutputStream* os, $MessageProp* msgProp) {
	$useLocalCurrentObjectStackCache();
	try {
		if ($nc(this->cipherHelper)->getProto() == 0) {
			$var($MicToken, token, $new($MicToken, this, msgProp, inMsg, offset, len));
			token->encode(os);
		} else if ($nc(this->cipherHelper)->getProto() == 1) {
			$var($MicToken_v2, token, $new($MicToken_v2, this, msgProp, inMsg, offset, len));
			token->encode(os);
		}
	} catch ($IOException& e) {
		$var($GSSException, gssException, $new($GSSException, $GSSException::FAILURE, -1, $(e->getMessage())));
		gssException->initCause(e);
		$throw(gssException);
	}
}

void Krb5Context::getMIC($InputStream* is, $OutputStream* os, $MessageProp* msgProp) {
	$useLocalCurrentObjectStackCache();
	$var($bytes, data, nullptr);
	try {
		$assign(data, $new($bytes, $nc(is)->available()));
		is->read(data);
	} catch ($IOException& e) {
		$var($GSSException, gssException, $new($GSSException, $GSSException::FAILURE, -1, $(e->getMessage())));
		gssException->initCause(e);
		$throw(gssException);
	}
	getMIC(data, 0, $nc(data)->length, os, msgProp);
}

void Krb5Context::verifyMIC($bytes* inTok, int32_t tokOffset, int32_t tokLen, $bytes* inMsg, int32_t msgOffset, int32_t msgLen, $MessageProp* msgProp) {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->cipherHelper)->getProto() == 0) {
		$var($MicToken, token, $new($MicToken, this, inTok, tokOffset, tokLen, msgProp));
		token->verify(inMsg, msgOffset, msgLen);
		setSequencingAndReplayProps(static_cast<$MessageToken*>(token), msgProp);
	} else if ($nc(this->cipherHelper)->getProto() == 1) {
		$var($MicToken_v2, token, $new($MicToken_v2, this, inTok, tokOffset, tokLen, msgProp));
		token->verify(inMsg, msgOffset, msgLen);
		setSequencingAndReplayProps(static_cast<$MessageToken_v2*>(token), msgProp);
	}
}

void Krb5Context::verifyMIC($InputStream* is, $bytes* inMsg, int32_t msgOffset, int32_t msgLen, $MessageProp* msgProp) {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->cipherHelper)->getProto() == 0) {
		$var($MicToken, token, $new($MicToken, this, is, msgProp));
		token->verify(inMsg, msgOffset, msgLen);
		setSequencingAndReplayProps(static_cast<$MessageToken*>(token), msgProp);
	} else if ($nc(this->cipherHelper)->getProto() == 1) {
		$var($MicToken_v2, token, $new($MicToken_v2, this, is, msgProp));
		token->verify(inMsg, msgOffset, msgLen);
		setSequencingAndReplayProps(static_cast<$MessageToken_v2*>(token), msgProp);
	}
}

void Krb5Context::verifyMIC($InputStream* is, $InputStream* msgStr, $MessageProp* mProp) {
	$useLocalCurrentObjectStackCache();
	$var($bytes, msg, nullptr);
	try {
		$assign(msg, $new($bytes, $nc(msgStr)->available()));
		msgStr->read(msg);
	} catch ($IOException& e) {
		$var($GSSException, gssException, $new($GSSException, $GSSException::FAILURE, -1, $(e->getMessage())));
		gssException->initCause(e);
		$throw(gssException);
	}
	verifyMIC(is, msg, 0, $nc(msg)->length, mProp);
}

$bytes* Krb5Context::export$() {
	$throwNew($GSSException, $GSSException::UNAVAILABLE, -1, "GSS Export Context not available"_s);
	$shouldNotReachHere();
}

void Krb5Context::dispose() {
	this->state = Krb5Context::STATE_DELETED;
	$set(this, delegatedCred, nullptr);
	$set(this, tgt, nullptr);
	$set(this, serviceCreds, nullptr);
	$set(this, key, nullptr);
}

$Provider* Krb5Context::getProvider() {
	$init($Krb5MechFactory);
	return $Krb5MechFactory::PROVIDER;
}

void Krb5Context::setSequencingAndReplayProps($MessageToken* token, $MessageProp* prop) {
	if (this->replayDetState || this->sequenceDetState) {
		int32_t seqNum = $nc(token)->getSequenceNumber();
		$nc(this->peerTokenTracker)->getProps(seqNum, prop);
	}
}

void Krb5Context::setSequencingAndReplayProps($MessageToken_v2* token, $MessageProp* prop) {
	if (this->replayDetState || this->sequenceDetState) {
		int32_t seqNum = $nc(token)->getSequenceNumber();
		$nc(this->peerTokenTracker)->getProps(seqNum, prop);
	}
}

void Krb5Context::checkPermission($String* principal, $String* action) {
	$useLocalCurrentObjectStackCache();
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		$var($ServicePermission, perm, $new($ServicePermission, principal, action));
		sm->checkPermission(perm);
	}
}

$String* Krb5Context::getHexBytes($bytes* bytes, int32_t pos, int32_t len) {
	$init(Krb5Context);
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, sb, $new($StringBuilder));
	for (int32_t i = 0; i < len; ++i) {
		int32_t b1 = (int32_t)(($nc(bytes)->get(i) >> 4) & (uint32_t)15);
		int32_t b2 = (int32_t)(bytes->get(i) & (uint32_t)15);
		sb->append($($Integer::toHexString(b1)));
		sb->append($($Integer::toHexString(b2)));
		sb->append(u' ');
	}
	return sb->toString();
}

$String* Krb5Context::printState(int32_t state) {
	$init(Krb5Context);
	switch (state) {
	case Krb5Context::STATE_NEW:
		{
			return ("STATE_NEW"_s);
		}
	case Krb5Context::STATE_IN_PROCESS:
		{
			return ("STATE_IN_PROCESS"_s);
		}
	case Krb5Context::STATE_DONE:
		{
			return ("STATE_DONE"_s);
		}
	case Krb5Context::STATE_DELETED:
		{
			return ("STATE_DELETED"_s);
		}
	default:
		{
			return ($str({"Unknown state "_s, $$str(state)}));
		}
	}
}

$GSSCaller* Krb5Context::getCaller() {
	return this->caller;
}

$Object* Krb5Context::inquireSecContext($String* type) {
	$useLocalCurrentObjectStackCache();
	if (!isEstablished()) {
		$throwNew($GSSException, $GSSException::NO_CONTEXT, -1, "Security context not established."_s);
	}
	{
		$var($String, s52897$, type);
		int32_t tmp52897$ = -1;
		switch ($nc(s52897$)->hashCode()) {
		case 0x3C823B08:
			{
				if (s52897$->equals("KRB5_GET_SESSION_KEY"_s)) {
					tmp52897$ = 0;
				}
				break;
			}
		case 0x7714F54A:
			{
				if (s52897$->equals("KRB5_GET_SESSION_KEY_EX"_s)) {
					tmp52897$ = 1;
				}
				break;
			}
		case (int32_t)0xD312BEF7:
			{
				if (s52897$->equals("KRB5_GET_TKT_FLAGS"_s)) {
					tmp52897$ = 2;
				}
				break;
			}
		case (int32_t)0x9AFCAFC5:
			{
				if (s52897$->equals("KRB5_GET_AUTHZ_DATA"_s)) {
					tmp52897$ = 3;
				}
				break;
			}
		case 0x48130FA3:
			{
				if (s52897$->equals("KRB5_GET_AUTHTIME"_s)) {
					tmp52897$ = 4;
				}
				break;
			}
		case (int32_t)0x9AB16680:
			{
				if (s52897$->equals("KRB5_GET_KRB_CRED"_s)) {
					tmp52897$ = 5;
				}
				break;
			}
		}
		{
			$var($KerberosPrincipal, sender, nullptr)
			$var($KerberosPrincipal, recipient, nullptr)
			switch (tmp52897$) {
			case 0:
				{
					return $of($new($Krb5Context$KerberosSessionKey, this->key));
				}
			case 1:
				{
					$var($bytes, var$0, $nc(this->key)->getBytes());
					return $of($new($1EncryptionKey, var$0, $nc(this->key)->getEType()));
				}
			case 2:
				{
					return $of($nc(this->tktFlags)->clone());
				}
			case 3:
				{
					if (isInitiator()) {
						$throwNew($GSSException, $GSSException::UNAVAILABLE, -1, "AuthzData not available on initiator side."_s);
					} else {
						return $of(this->authzData);
					}
				}
			case 4:
				{
					return $of(this->authTime);
				}
			case 5:
				{
					if (!isInitiator()) {
						$throwNew($GSSException, $GSSException::UNAVAILABLE, -1, "KRB_CRED not available on acceptor side."_s);
					}
					$assign(sender, $new($KerberosPrincipal, $($nc($($nc(this->myName)->getKrb5PrincipalName()))->getName())));
					$assign(recipient, $new($KerberosPrincipal, $($nc($($nc(this->peerName)->getKrb5PrincipalName()))->getName())));
					try {
						$var($bytes, krbCred, $$new($KrbCred, this->tgt, this->serviceCreds, this->key)->getMessage());
						return $of($new($KerberosCredMessage, sender, recipient, krbCred));
					} catch ($KrbException& e) {
						$var($GSSException, gsse, $new($GSSException, $GSSException::UNAVAILABLE, -1, "KRB_CRED not generated correctly."_s));
						gsse->initCause(e);
						$throw(gsse);
					} catch ($IOException& e) {
						$var($GSSException, gsse, $new($GSSException, $GSSException::UNAVAILABLE, -1, "KRB_CRED not generated correctly."_s));
						gsse->initCause(e);
						$throw(gsse);
					}
				}
			}
		}
	}
	$throwNew($GSSException, $GSSException::UNAVAILABLE, -1, "Inquire type not supported."_s);
	$shouldNotReachHere();
}

void Krb5Context::setTktFlags($booleans* tktFlags) {
	$set(this, tktFlags, tktFlags);
}

void Krb5Context::setAuthTime($String* authTime) {
	$set(this, authTime, authTime);
}

void Krb5Context::setAuthzData($AuthorizationData* authzData) {
	$set(this, authzData, authzData);
}

void clinit$Krb5Context($Class* class$) {
	$init($Krb5Util);
	Krb5Context::DEBUG = $Krb5Util::DEBUG;
}

Krb5Context::Krb5Context() {
}

$Class* Krb5Context::load$($String* name, bool initialize) {
	$loadClass(Krb5Context, name, initialize, &_Krb5Context_ClassInfo_, clinit$Krb5Context, allocate$Krb5Context);
	return class$;
}

$Class* Krb5Context::class$ = nullptr;

			} // krb5
		} // jgss
	} // security
} // sun