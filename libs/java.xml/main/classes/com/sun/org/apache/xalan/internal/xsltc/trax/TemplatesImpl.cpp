#include <com/sun/org/apache/xalan/internal/xsltc/trax/TemplatesImpl.h>

#include <com/sun/org/apache/xalan/internal/xsltc/DOM.h>
#include <com/sun/org/apache/xalan/internal/xsltc/Translet.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Constants.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMsg.h>
#include <com/sun/org/apache/xalan/internal/xsltc/runtime/AbstractTranslet.h>
#include <com/sun/org/apache/xalan/internal/xsltc/trax/TemplatesImpl$1.h>
#include <com/sun/org/apache/xalan/internal/xsltc/trax/TemplatesImpl$2.h>
#include <com/sun/org/apache/xalan/internal/xsltc/trax/TemplatesImpl$3.h>
#include <com/sun/org/apache/xalan/internal/xsltc/trax/TemplatesImpl$TransletClassLoader.h>
#include <com/sun/org/apache/xalan/internal/xsltc/trax/TransformerFactoryImpl.h>
#include <com/sun/org/apache/xalan/internal/xsltc/trax/TransformerImpl.h>
#include <java/io/NotSerializableException.h>
#include <java/io/ObjectInputStream$GetField.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream$PutField.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/ObjectStreamField.h>
#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/ClassFormatError.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/Error.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InstantiationException.h>
#include <java/lang/LinkageError.h>
#include <java/lang/Module.h>
#include <java/lang/ModuleLayer.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/RuntimePermission.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/ThreadLocal.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/module/Configuration.h>
#include <java/lang/module/ModuleDescriptor$Builder.h>
#include <java/lang/module/ModuleDescriptor$Modifier.h>
#include <java/lang/module/ModuleDescriptor.h>
#include <java/lang/module/ModuleFinder.h>
#include <java/lang/module/ModuleReference.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/InvocationTargetException.h>
#include <java/net/URI.h>
#include <java/net/URL.h>
#include <java/nio/file/Path.h>
#include <java/security/AccessController.h>
#include <java/security/BasicPermission.h>
#include <java/security/CodeSigner.h>
#include <java/security/CodeSource.h>
#include <java/security/Permission.h>
#include <java/security/PermissionCollection.h>
#include <java/security/Principal.h>
#include <java/security/PrivilegedAction.h>
#include <java/security/ProtectionDomain.h>
#include <java/util/AbstractMap.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/HashMap.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Optional.h>
#include <java/util/Properties.h>
#include <java/util/Set.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/Function.h>
#include <javax/xml/XMLConstants.h>
#include <javax/xml/transform/Templates.h>
#include <javax/xml/transform/Transformer.h>
#include <javax/xml/transform/TransformerConfigurationException.h>
#include <javax/xml/transform/URIResolver.h>
#include <jdk/xml/internal/JdkConstants.h>
#include <jdk/xml/internal/SecuritySupport.h>
#include <jcpp.h>

#undef ABSTRACT_TRANSLET
#undef ACCESS_EXTERNAL_STYLESHEET
#undef DESERIALIZE_TRANSLET
#undef DESERIALIZE_TRANSLET_ERR
#undef EXTERNAL_ACCESS_DEFAULT
#undef FEATURE_SECURE_PROCESSING
#undef NO_MAIN_TRANSLET_ERR
#undef NO_TRANSLET_CLASS_ERR
#undef PKGS_USED_BY_TRANSLET_CLASSES
#undef SYNTHETIC
#undef TRANSLET_CLASS_ERR
#undef TRANSLET_OBJECT_ERR
#undef TYPE

using $ObjectStreamFieldArray = $Array<::java::io::ObjectStreamField>;
using $PathArray = $Array<::java::nio::file::Path>;
using $CodeSignerArray = $Array<::java::security::CodeSigner>;
using $PrincipalArray = $Array<::java::security::Principal>;
using $byteArray2 = $Array<int8_t, 2>;
using $DOM = ::com::sun::org::apache::xalan::internal::xsltc::DOM;
using $Translet = ::com::sun::org::apache::xalan::internal::xsltc::Translet;
using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants;
using $ErrorMsg = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ErrorMsg;
using $AbstractTranslet = ::com::sun::org::apache::xalan::internal::xsltc::runtime::AbstractTranslet;
using $TemplatesImpl$1 = ::com::sun::org::apache::xalan::internal::xsltc::trax::TemplatesImpl$1;
using $TemplatesImpl$2 = ::com::sun::org::apache::xalan::internal::xsltc::trax::TemplatesImpl$2;
using $TemplatesImpl$3 = ::com::sun::org::apache::xalan::internal::xsltc::trax::TemplatesImpl$3;
using $TemplatesImpl$TransletClassLoader = ::com::sun::org::apache::xalan::internal::xsltc::trax::TemplatesImpl$TransletClassLoader;
using $TransformerFactoryImpl = ::com::sun::org::apache::xalan::internal::xsltc::trax::TransformerFactoryImpl;
using $TransformerImpl = ::com::sun::org::apache::xalan::internal::xsltc::trax::TransformerImpl;
using $NotSerializableException = ::java::io::NotSerializableException;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectInputStream$GetField = ::java::io::ObjectInputStream$GetField;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ObjectOutputStream$PutField = ::java::io::ObjectOutputStream$PutField;
using $ObjectStreamField = ::java::io::ObjectStreamField;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $ClassFormatError = ::java::lang::ClassFormatError;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InstantiationException = ::java::lang::InstantiationException;
using $Integer = ::java::lang::Integer;
using $LinkageError = ::java::lang::LinkageError;
using $MethodInfo = ::java::lang::MethodInfo;
using $Module = ::java::lang::Module;
using $ModuleLayer = ::java::lang::ModuleLayer;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $RuntimePermission = ::java::lang::RuntimePermission;
using $SecurityManager = ::java::lang::SecurityManager;
using $ThreadLocal = ::java::lang::ThreadLocal;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Configuration = ::java::lang::module::Configuration;
using $ModuleDescriptor = ::java::lang::module::ModuleDescriptor;
using $ModuleDescriptor$Builder = ::java::lang::module::ModuleDescriptor$Builder;
using $ModuleDescriptor$Modifier = ::java::lang::module::ModuleDescriptor$Modifier;
using $ModuleFinder = ::java::lang::module::ModuleFinder;
using $ModuleReference = ::java::lang::module::ModuleReference;
using $Constructor = ::java::lang::reflect::Constructor;
using $InvocationTargetException = ::java::lang::reflect::InvocationTargetException;
using $URI = ::java::net::URI;
using $URL = ::java::net::URL;
using $AccessController = ::java::security::AccessController;
using $BasicPermission = ::java::security::BasicPermission;
using $CodeSource = ::java::security::CodeSource;
using $Permission = ::java::security::Permission;
using $PermissionCollection = ::java::security::PermissionCollection;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $ProtectionDomain = ::java::security::ProtectionDomain;
using $AbstractMap = ::java::util::AbstractMap;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $HashMap = ::java::util::HashMap;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Optional = ::java::util::Optional;
using $Properties = ::java::util::Properties;
using $Set = ::java::util::Set;
using $Consumer = ::java::util::function::Consumer;
using $Function = ::java::util::function::Function;
using $XMLConstants = ::javax::xml::XMLConstants;
using $Templates = ::javax::xml::transform::Templates;
using $Transformer = ::javax::xml::transform::Transformer;
using $TransformerConfigurationException = ::javax::xml::transform::TransformerConfigurationException;
using $URIResolver = ::javax::xml::transform::URIResolver;
using $JdkConstants = ::jdk::xml::internal::JdkConstants;
using $SecuritySupport = ::jdk::xml::internal::SecuritySupport;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace trax {

class TemplatesImpl$$Lambda$lambda$createModule$1 : public $PrivilegedAction {
	$class(TemplatesImpl$$Lambda$lambda$createModule$1, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$($ModuleLayer* bootLayer, $Configuration* cf, $ClassLoader* loader) {
		$set(this, bootLayer, bootLayer);
		$set(this, cf, cf);
		$set(this, loader, loader);
	}
	virtual $Object* run() override {
		 return $of(TemplatesImpl::lambda$createModule$1(bootLayer, cf, loader));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TemplatesImpl$$Lambda$lambda$createModule$1>());
	}
	$ModuleLayer* bootLayer = nullptr;
	$Configuration* cf = nullptr;
	$ClassLoader* loader = nullptr;
	static $FieldInfo fieldInfos[4];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TemplatesImpl$$Lambda$lambda$createModule$1::fieldInfos[4] = {
	{"bootLayer", "Ljava/lang/ModuleLayer;", nullptr, $PUBLIC, $field(TemplatesImpl$$Lambda$lambda$createModule$1, bootLayer)},
	{"cf", "Ljava/lang/module/Configuration;", nullptr, $PUBLIC, $field(TemplatesImpl$$Lambda$lambda$createModule$1, cf)},
	{"loader", "Ljava/lang/ClassLoader;", nullptr, $PUBLIC, $field(TemplatesImpl$$Lambda$lambda$createModule$1, loader)},
	{}
};
$MethodInfo TemplatesImpl$$Lambda$lambda$createModule$1::methodInfos[3] = {
	{"<init>", "(Ljava/lang/ModuleLayer;Ljava/lang/module/Configuration;Ljava/lang/ClassLoader;)V", nullptr, $PUBLIC, $method(TemplatesImpl$$Lambda$lambda$createModule$1, init$, void, $ModuleLayer*, $Configuration*, $ClassLoader*)},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(TemplatesImpl$$Lambda$lambda$createModule$1, run, $Object*)},
	{}
};
$ClassInfo TemplatesImpl$$Lambda$lambda$createModule$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.org.apache.xalan.internal.xsltc.trax.TemplatesImpl$$Lambda$lambda$createModule$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	fieldInfos,
	methodInfos
};
$Class* TemplatesImpl$$Lambda$lambda$createModule$1::load$($String* name, bool initialize) {
	$loadClass(TemplatesImpl$$Lambda$lambda$createModule$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TemplatesImpl$$Lambda$lambda$createModule$1::class$ = nullptr;

class TemplatesImpl$$Lambda$lambda$defineTransletClasses$2$1 : public $Consumer {
	$class(TemplatesImpl$$Lambda$lambda$defineTransletClasses$2$1, $NO_CLASS_INIT, $Consumer)
public:
	void init$($Module* thisModule, $Module* m, $PermissionCollection* perms) {
		$set(this, thisModule, thisModule);
		$set(this, m, m);
		$set(this, perms, perms);
	}
	virtual void accept(Object$* p) override {
		TemplatesImpl::lambda$defineTransletClasses$2(thisModule, m, perms, $cast($String, p));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TemplatesImpl$$Lambda$lambda$defineTransletClasses$2$1>());
	}
	$Module* thisModule = nullptr;
	$Module* m = nullptr;
	$PermissionCollection* perms = nullptr;
	static $FieldInfo fieldInfos[4];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TemplatesImpl$$Lambda$lambda$defineTransletClasses$2$1::fieldInfos[4] = {
	{"thisModule", "Ljava/lang/Module;", nullptr, $PUBLIC, $field(TemplatesImpl$$Lambda$lambda$defineTransletClasses$2$1, thisModule)},
	{"m", "Ljava/lang/Module;", nullptr, $PUBLIC, $field(TemplatesImpl$$Lambda$lambda$defineTransletClasses$2$1, m)},
	{"perms", "Ljava/security/PermissionCollection;", nullptr, $PUBLIC, $field(TemplatesImpl$$Lambda$lambda$defineTransletClasses$2$1, perms)},
	{}
};
$MethodInfo TemplatesImpl$$Lambda$lambda$defineTransletClasses$2$1::methodInfos[3] = {
	{"<init>", "(Ljava/lang/Module;Ljava/lang/Module;Ljava/security/PermissionCollection;)V", nullptr, $PUBLIC, $method(TemplatesImpl$$Lambda$lambda$defineTransletClasses$2$1, init$, void, $Module*, $Module*, $PermissionCollection*)},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(TemplatesImpl$$Lambda$lambda$defineTransletClasses$2$1, accept, void, Object$*)},
	{}
};
$ClassInfo TemplatesImpl$$Lambda$lambda$defineTransletClasses$2$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.org.apache.xalan.internal.xsltc.trax.TemplatesImpl$$Lambda$lambda$defineTransletClasses$2$1",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* TemplatesImpl$$Lambda$lambda$defineTransletClasses$2$1::load$($String* name, bool initialize) {
	$loadClass(TemplatesImpl$$Lambda$lambda$defineTransletClasses$2$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TemplatesImpl$$Lambda$lambda$defineTransletClasses$2$1::class$ = nullptr;

class TemplatesImpl$$Lambda$lambda$createModule$0$2 : public $Function {
	$class(TemplatesImpl$$Lambda$lambda$createModule$0$2, $NO_CLASS_INIT, $Function)
public:
	void init$($ClassLoader* loader) {
		$set(this, loader, loader);
	}
	virtual $Object* apply(Object$* name) override {
		 return $of(TemplatesImpl::lambda$createModule$0(loader, $cast($String, name)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TemplatesImpl$$Lambda$lambda$createModule$0$2>());
	}
	$ClassLoader* loader = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TemplatesImpl$$Lambda$lambda$createModule$0$2::fieldInfos[2] = {
	{"loader", "Ljava/lang/ClassLoader;", nullptr, $PUBLIC, $field(TemplatesImpl$$Lambda$lambda$createModule$0$2, loader)},
	{}
};
$MethodInfo TemplatesImpl$$Lambda$lambda$createModule$0$2::methodInfos[3] = {
	{"<init>", "(Ljava/lang/ClassLoader;)V", nullptr, $PUBLIC, $method(TemplatesImpl$$Lambda$lambda$createModule$0$2, init$, void, $ClassLoader*)},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(TemplatesImpl$$Lambda$lambda$createModule$0$2, apply, $Object*, Object$*)},
	{}
};
$ClassInfo TemplatesImpl$$Lambda$lambda$createModule$0$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.org.apache.xalan.internal.xsltc.trax.TemplatesImpl$$Lambda$lambda$createModule$0$2",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* TemplatesImpl$$Lambda$lambda$createModule$0$2::load$($String* name, bool initialize) {
	$loadClass(TemplatesImpl$$Lambda$lambda$createModule$0$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TemplatesImpl$$Lambda$lambda$createModule$0$2::class$ = nullptr;

$FieldInfo _TemplatesImpl_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(TemplatesImpl, $assertionsDisabled)},
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(TemplatesImpl, serialVersionUID)},
	{"DESERIALIZE_TRANSLET", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TemplatesImpl, DESERIALIZE_TRANSLET)},
	{"ABSTRACT_TRANSLET", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(TemplatesImpl, ABSTRACT_TRANSLET)},
	{"_name", "Ljava/lang/String;", nullptr, $PRIVATE, $field(TemplatesImpl, _name)},
	{"_bytecodes", "[[B", nullptr, $PRIVATE, $field(TemplatesImpl, _bytecodes)},
	{"_class", "[Ljava/lang/Class;", "[Ljava/lang/Class<*>;", $PRIVATE, $field(TemplatesImpl, _class)},
	{"_transletIndex", "I", nullptr, $PRIVATE, $field(TemplatesImpl, _transletIndex)},
	{"_auxClasses", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Class<*>;>;", $PRIVATE | $TRANSIENT, $field(TemplatesImpl, _auxClasses)},
	{"_outputProperties", "Ljava/util/Properties;", nullptr, $PRIVATE, $field(TemplatesImpl, _outputProperties)},
	{"_indentNumber", "I", nullptr, $PRIVATE, $field(TemplatesImpl, _indentNumber)},
	{"_uriResolver", "Ljavax/xml/transform/URIResolver;", nullptr, $PRIVATE | $TRANSIENT, $field(TemplatesImpl, _uriResolver)},
	{"_sdom", "Ljava/lang/ThreadLocal;", "Ljava/lang/ThreadLocal<Lcom/sun/org/apache/xalan/internal/xsltc/DOM;>;", $PRIVATE | $TRANSIENT, $field(TemplatesImpl, _sdom)},
	{"_tfactory", "Lcom/sun/org/apache/xalan/internal/xsltc/trax/TransformerFactoryImpl;", nullptr, $PRIVATE | $TRANSIENT, $field(TemplatesImpl, _tfactory)},
	{"_overrideDefaultParser", "Z", nullptr, $PRIVATE | $TRANSIENT, $field(TemplatesImpl, _overrideDefaultParser)},
	{"_accessExternalStylesheet", "Ljava/lang/String;", nullptr, $PRIVATE | $TRANSIENT, $field(TemplatesImpl, _accessExternalStylesheet)},
	{"serialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TemplatesImpl, serialPersistentFields)},
	{}
};

$MethodInfo _TemplatesImpl_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "([[BLjava/lang/String;Ljava/util/Properties;ILcom/sun/org/apache/xalan/internal/xsltc/trax/TransformerFactoryImpl;)V", nullptr, $PROTECTED, $method(TemplatesImpl, init$, void, $byteArray2*, $String*, $Properties*, int32_t, $TransformerFactoryImpl*)},
	{"<init>", "([Ljava/lang/Class;Ljava/lang/String;Ljava/util/Properties;ILcom/sun/org/apache/xalan/internal/xsltc/trax/TransformerFactoryImpl;)V", "([Ljava/lang/Class<*>;Ljava/lang/String;Ljava/util/Properties;ILcom/sun/org/apache/xalan/internal/xsltc/trax/TransformerFactoryImpl;)V", $PROTECTED, $method(TemplatesImpl, init$, void, $ClassArray*, $String*, $Properties*, int32_t, $TransformerFactoryImpl*)},
	{"<init>", "()V", nullptr, $PUBLIC, $method(TemplatesImpl, init$, void)},
	{"createModule", "(Ljava/lang/module/ModuleDescriptor;Ljava/lang/ClassLoader;)Ljava/lang/Module;", nullptr, $PRIVATE, $method(TemplatesImpl, createModule, $Module*, $ModuleDescriptor*, $ClassLoader*)},
	{"defineTransletClasses", "()V", nullptr, $PRIVATE, $method(TemplatesImpl, defineTransletClasses, void), "javax.xml.transform.TransformerConfigurationException"},
	{"getOutputProperties", "()Ljava/util/Properties;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(TemplatesImpl, getOutputProperties, $Properties*)},
	{"getStylesheetDOM", "()Lcom/sun/org/apache/xalan/internal/xsltc/DOM;", nullptr, $PUBLIC, $method(TemplatesImpl, getStylesheetDOM, $DOM*)},
	{"getTransletBytecodes", "()[[B", nullptr, $PRIVATE | $SYNCHRONIZED, $method(TemplatesImpl, getTransletBytecodes, $byteArray2*)},
	{"getTransletClasses", "()[Ljava/lang/Class;", "()[Ljava/lang/Class<*>;", $PRIVATE | $SYNCHRONIZED, $method(TemplatesImpl, getTransletClasses, $ClassArray*)},
	{"getTransletIndex", "()I", nullptr, $PUBLIC | $SYNCHRONIZED, $method(TemplatesImpl, getTransletIndex, int32_t)},
	{"getTransletInstance", "()Lcom/sun/org/apache/xalan/internal/xsltc/Translet;", nullptr, $PRIVATE, $method(TemplatesImpl, getTransletInstance, $Translet*), "javax.xml.transform.TransformerConfigurationException"},
	{"getTransletName", "()Ljava/lang/String;", nullptr, $PROTECTED | $SYNCHRONIZED, $method(TemplatesImpl, getTransletName, $String*)},
	{"init", "(Ljava/lang/String;Ljava/util/Properties;ILcom/sun/org/apache/xalan/internal/xsltc/trax/TransformerFactoryImpl;)V", nullptr, $PRIVATE, $method(TemplatesImpl, init, void, $String*, $Properties*, int32_t, $TransformerFactoryImpl*)},
	{"lambda$createModule$0", "(Ljava/lang/ClassLoader;Ljava/lang/String;)Ljava/lang/ClassLoader;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TemplatesImpl, lambda$createModule$0, $ClassLoader*, $ClassLoader*, $String*)},
	{"lambda$createModule$1", "(Ljava/lang/ModuleLayer;Ljava/lang/module/Configuration;Ljava/lang/ClassLoader;)Ljava/lang/ModuleLayer;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TemplatesImpl, lambda$createModule$1, $ModuleLayer*, $ModuleLayer*, $Configuration*, $ClassLoader*)},
	{"lambda$defineTransletClasses$2", "(Ljava/lang/Module;Ljava/lang/Module;Ljava/security/PermissionCollection;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TemplatesImpl, lambda$defineTransletClasses$2, void, $Module*, $Module*, $PermissionCollection*, $String*)},
	{"newTransformer", "()Ljavax/xml/transform/Transformer;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(TemplatesImpl, newTransformer, $Transformer*), "javax.xml.transform.TransformerConfigurationException"},
	{"overrideDefaultParser", "()Z", nullptr, $PUBLIC, $method(TemplatesImpl, overrideDefaultParser, bool)},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(TemplatesImpl, readObject, void, $ObjectInputStream*), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"setStylesheetDOM", "(Lcom/sun/org/apache/xalan/internal/xsltc/DOM;)V", nullptr, $PUBLIC, $method(TemplatesImpl, setStylesheetDOM, void, $DOM*)},
	{"setTransletBytecodes", "([[B)V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(TemplatesImpl, setTransletBytecodes, void, $byteArray2*)},
	{"setTransletName", "(Ljava/lang/String;)V", nullptr, $PROTECTED | $SYNCHRONIZED, $method(TemplatesImpl, setTransletName, void, $String*)},
	{"setURIResolver", "(Ljavax/xml/transform/URIResolver;)V", nullptr, $PUBLIC | $SYNCHRONIZED, $method(TemplatesImpl, setURIResolver, void, $URIResolver*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(TemplatesImpl, writeObject, void, $ObjectOutputStream*), "java.io.IOException"},
	{}
};

$InnerClassInfo _TemplatesImpl_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xalan.internal.xsltc.trax.TemplatesImpl$TransletClassLoader", "com.sun.org.apache.xalan.internal.xsltc.trax.TemplatesImpl", "TransletClassLoader", $STATIC | $FINAL},
	{"com.sun.org.apache.xalan.internal.xsltc.trax.TemplatesImpl$3", nullptr, nullptr, 0},
	{"com.sun.org.apache.xalan.internal.xsltc.trax.TemplatesImpl$2", nullptr, nullptr, 0},
	{"com.sun.org.apache.xalan.internal.xsltc.trax.TemplatesImpl$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TemplatesImpl_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.trax.TemplatesImpl",
	"java.lang.Object",
	"javax.xml.transform.Templates,java.io.Serializable",
	_TemplatesImpl_FieldInfo_,
	_TemplatesImpl_MethodInfo_,
	nullptr,
	nullptr,
	_TemplatesImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xalan.internal.xsltc.trax.TemplatesImpl$TransletClassLoader,com.sun.org.apache.xalan.internal.xsltc.trax.TemplatesImpl$3,com.sun.org.apache.xalan.internal.xsltc.trax.TemplatesImpl$2,com.sun.org.apache.xalan.internal.xsltc.trax.TemplatesImpl$1"
};

$Object* allocate$TemplatesImpl($Class* clazz) {
	return $of($alloc(TemplatesImpl));
}

int32_t TemplatesImpl::hashCode() {
	 return this->$Templates::hashCode();
}

bool TemplatesImpl::equals(Object$* arg0) {
	 return this->$Templates::equals(arg0);
}

$Object* TemplatesImpl::clone() {
	 return this->$Templates::clone();
}

$String* TemplatesImpl::toString() {
	 return this->$Templates::toString();
}

void TemplatesImpl::finalize() {
	this->$Templates::finalize();
}

bool TemplatesImpl::$assertionsDisabled = false;
$String* TemplatesImpl::DESERIALIZE_TRANSLET = nullptr;
$String* TemplatesImpl::ABSTRACT_TRANSLET = nullptr;
$ObjectStreamFieldArray* TemplatesImpl::serialPersistentFields = nullptr;

void TemplatesImpl::init$($byteArray2* bytecodes, $String* transletName, $Properties* outputProperties, int32_t indentNumber, $TransformerFactoryImpl* tfactory) {
	$set(this, _name, nullptr);
	$set(this, _bytecodes, nullptr);
	$set(this, _class, nullptr);
	this->_transletIndex = -1;
	$set(this, _auxClasses, nullptr);
	$set(this, _uriResolver, nullptr);
	$set(this, _sdom, $new($ThreadLocal));
	$set(this, _tfactory, nullptr);
	$init($JdkConstants);
	$set(this, _accessExternalStylesheet, $JdkConstants::EXTERNAL_ACCESS_DEFAULT);
	$set(this, _bytecodes, bytecodes);
	init(transletName, outputProperties, indentNumber, tfactory);
}

void TemplatesImpl::init$($ClassArray* transletClasses, $String* transletName, $Properties* outputProperties, int32_t indentNumber, $TransformerFactoryImpl* tfactory) {
	$set(this, _name, nullptr);
	$set(this, _bytecodes, nullptr);
	$set(this, _class, nullptr);
	this->_transletIndex = -1;
	$set(this, _auxClasses, nullptr);
	$set(this, _uriResolver, nullptr);
	$set(this, _sdom, $new($ThreadLocal));
	$set(this, _tfactory, nullptr);
	$init($JdkConstants);
	$set(this, _accessExternalStylesheet, $JdkConstants::EXTERNAL_ACCESS_DEFAULT);
	$set(this, _class, transletClasses);
	this->_transletIndex = 0;
	init(transletName, outputProperties, indentNumber, tfactory);
}

void TemplatesImpl::init($String* transletName, $Properties* outputProperties, int32_t indentNumber, $TransformerFactoryImpl* tfactory) {
	$set(this, _name, transletName);
	$set(this, _outputProperties, outputProperties);
	this->_indentNumber = indentNumber;
	$set(this, _tfactory, tfactory);
	this->_overrideDefaultParser = $nc(tfactory)->overrideDefaultParser();
	$init($XMLConstants);
	$set(this, _accessExternalStylesheet, $cast($String, tfactory->getAttribute($XMLConstants::ACCESS_EXTERNAL_STYLESHEET)));
}

void TemplatesImpl::init$() {
	$set(this, _name, nullptr);
	$set(this, _bytecodes, nullptr);
	$set(this, _class, nullptr);
	this->_transletIndex = -1;
	$set(this, _auxClasses, nullptr);
	$set(this, _uriResolver, nullptr);
	$set(this, _sdom, $new($ThreadLocal));
	$set(this, _tfactory, nullptr);
	$init($JdkConstants);
	$set(this, _accessExternalStylesheet, $JdkConstants::EXTERNAL_ACCESS_DEFAULT);
}

void TemplatesImpl::readObject($ObjectInputStream* is) {
	$useLocalCurrentObjectStackCache();
	$var($SecurityManager, security, $System::getSecurityManager());
	if (security != nullptr) {
		$var($String, temp, $SecuritySupport::getSystemProperty(TemplatesImpl::DESERIALIZE_TRANSLET));
		bool var$0 = temp == nullptr;
		if (!var$0) {
			bool var$1 = $nc(temp)->length() == 0;
			var$0 = !(var$1 || $nc(temp)->equalsIgnoreCase("true"_s));
		}
		if (var$0) {
			$init($ErrorMsg);
			$var($ErrorMsg, err, $new($ErrorMsg, $ErrorMsg::DESERIALIZE_TRANSLET_ERR));
			$throwNew($UnsupportedOperationException, $(err->toString()));
		}
	}
	$var($ObjectInputStream$GetField, gf, $nc(is)->readFields());
	$set(this, _name, $cast($String, $nc(gf)->get("_name"_s, ($Object*)nullptr)));
	$set(this, _bytecodes, $cast($byteArray2, gf->get("_bytecodes"_s, ($Object*)nullptr)));
	$set(this, _class, $cast($ClassArray, gf->get("_class"_s, ($Object*)nullptr)));
	this->_transletIndex = gf->get("_transletIndex"_s, -1);
	$set(this, _outputProperties, $cast($Properties, gf->get("_outputProperties"_s, ($Object*)nullptr)));
	this->_indentNumber = gf->get("_indentNumber"_s, 0);
	if (is->readBoolean()) {
		$set(this, _uriResolver, $cast($URIResolver, is->readObject()));
	}
	$set(this, _tfactory, $new($TransformerFactoryImpl));
}

void TemplatesImpl::writeObject($ObjectOutputStream* os) {
	if (this->_auxClasses != nullptr) {
		$throwNew($NotSerializableException, "com.sun.org.apache.xalan.internal.xsltc.runtime.Hashtable"_s);
	}
	$var($ObjectOutputStream$PutField, pf, $nc(os)->putFields());
	$nc(pf)->put("_name"_s, $of(this->_name));
	pf->put("_bytecodes"_s, $of(this->_bytecodes));
	pf->put("_class"_s, $of(this->_class));
	pf->put("_transletIndex"_s, this->_transletIndex);
	pf->put("_outputProperties"_s, $of(this->_outputProperties));
	pf->put("_indentNumber"_s, this->_indentNumber);
	os->writeFields();
	if ($instanceOf($Serializable, this->_uriResolver)) {
		os->writeBoolean(true);
		os->writeObject($cast($Serializable, this->_uriResolver));
	} else {
		os->writeBoolean(false);
	}
}

bool TemplatesImpl::overrideDefaultParser() {
	return this->_overrideDefaultParser;
}

void TemplatesImpl::setURIResolver($URIResolver* resolver) {
	$synchronized(this) {
		$set(this, _uriResolver, resolver);
	}
}

void TemplatesImpl::setTransletBytecodes($byteArray2* bytecodes) {
	$synchronized(this) {
		$set(this, _bytecodes, bytecodes);
	}
}

$byteArray2* TemplatesImpl::getTransletBytecodes() {
	$synchronized(this) {
		return this->_bytecodes;
	}
}

$ClassArray* TemplatesImpl::getTransletClasses() {
	$synchronized(this) {
		try {
			if (this->_class == nullptr) {
				defineTransletClasses();
			}
		} catch ($TransformerConfigurationException& e) {
		}
		return this->_class;
	}
}

int32_t TemplatesImpl::getTransletIndex() {
	$synchronized(this) {
		try {
			if (this->_class == nullptr) {
				defineTransletClasses();
			}
		} catch ($TransformerConfigurationException& e) {
		}
		return this->_transletIndex;
	}
}

void TemplatesImpl::setTransletName($String* name) {
	$synchronized(this) {
		$set(this, _name, name);
	}
}

$String* TemplatesImpl::getTransletName() {
	$synchronized(this) {
		return this->_name;
	}
}

$Module* TemplatesImpl::createModule($ModuleDescriptor* descriptor, $ClassLoader* loader) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($String, mn, $nc(descriptor)->name());
	$var($ModuleReference, mref, $new($TemplatesImpl$1, this, descriptor, nullptr));
	$var($ModuleFinder, finder, $new($TemplatesImpl$2, this, mn, mref));
	$var($ModuleLayer, bootLayer, $ModuleLayer::boot());
	$var($ModuleFinder, var$0, finder);
	$var($ModuleFinder, var$1, $ModuleFinder::of($$new($PathArray, 0)));
	$var($Configuration, cf, $nc($($nc(bootLayer)->configuration()))->resolve(var$0, var$1, $($Set::of($of(mn)))));
	$var($PrivilegedAction, pa, static_cast<$PrivilegedAction*>($new(TemplatesImpl$$Lambda$lambda$createModule$1, bootLayer, cf, loader)));
	$var($ModuleLayer, layer, $cast($ModuleLayer, $AccessController::doPrivileged(pa)));
	$var($Module, m, $cast($Module, $nc($($nc(layer)->findModule(mn)))->get()));
	if (!TemplatesImpl::$assertionsDisabled && !($nc(m)->getLayer() == layer)) {
		$throwNew($AssertionError);
	}
	return m;
}

void TemplatesImpl::defineTransletClasses() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if (this->_bytecodes == nullptr) {
		$init($ErrorMsg);
		$var($ErrorMsg, err, $new($ErrorMsg, $ErrorMsg::NO_TRANSLET_CLASS_ERR));
		$throwNew($TransformerConfigurationException, $(err->toString()));
	}
	$var($TemplatesImpl$TransletClassLoader, loader, $cast($TemplatesImpl$TransletClassLoader, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($TemplatesImpl$3, this)))));
	try {
		int32_t classCount = $nc(this->_bytecodes)->length;
		$set(this, _class, $new($ClassArray, classCount));
		if (classCount > 1) {
			$set(this, _auxClasses, $new($HashMap));
		}
		$var($String, mn, "jdk.translet"_s);
		$var($String, pn, $nc(this->_tfactory)->getPackageName());
		if (!TemplatesImpl::$assertionsDisabled && !(pn != nullptr && pn->length() > 0)) {
			$throwNew($AssertionError);
		}
		$init($ModuleDescriptor$Modifier);
		$var($ModuleDescriptor, descriptor, $nc($($nc($($nc($($ModuleDescriptor::newModule(mn, $($Set::of($of($ModuleDescriptor$Modifier::SYNTHETIC))))))->requires("java.xml"_s)))->exports(pn, $($Set::of($of("java.xml"_s))))))->build());
		$var($Module, m, createModule(descriptor, loader));
		$var($Module, thisModule, TemplatesImpl::class$->getModule());
		$var($PermissionCollection, perms, $$new($RuntimePermission, "*"_s)->newPermissionCollection());
		$init($Constants);
		$nc($($Arrays::asList($Constants::PKGS_USED_BY_TRANSLET_CLASSES)))->forEach(static_cast<$Consumer*>($$new(TemplatesImpl$$Lambda$lambda$defineTransletClasses$2$1, thisModule, m, perms)));
		$var($CodeSource, codeSource, $new($CodeSource, ($URL*)nullptr, ($CodeSignerArray*)nullptr));
		$var($ProtectionDomain, pd, $new($ProtectionDomain, codeSource, perms, loader, nullptr));
		$nc(thisModule)->addReads(m);
		for (int32_t i = 0; i < classCount; ++i) {
			$nc(this->_class)->set(i, $nc(loader)->defineClass($nc(this->_bytecodes)->get(i), pd));
			$Class* superClass = $nc($nc(this->_class)->get(i))->getSuperclass();
			if ($nc($($nc(superClass)->getName()))->equals(TemplatesImpl::ABSTRACT_TRANSLET)) {
				this->_transletIndex = i;
			} else {
				$nc(this->_auxClasses)->put($($nc($nc(this->_class)->get(i))->getName()), $nc(this->_class)->get(i));
			}
		}
		if (this->_transletIndex < 0) {
			$init($ErrorMsg);
			$var($ErrorMsg, err, $new($ErrorMsg, $ErrorMsg::NO_MAIN_TRANSLET_ERR, $of(this->_name)));
			$throwNew($TransformerConfigurationException, $(err->toString()));
		}
	} catch ($ClassFormatError& e) {
		$init($ErrorMsg);
		$var($ErrorMsg, err, $new($ErrorMsg, $ErrorMsg::TRANSLET_CLASS_ERR, $of(this->_name)));
		$throwNew($TransformerConfigurationException, $(err->toString()), static_cast<$Throwable*>(e));
	} catch ($LinkageError& e) {
		$init($ErrorMsg);
		$var($ErrorMsg, err, $new($ErrorMsg, $ErrorMsg::TRANSLET_OBJECT_ERR, $of(this->_name)));
		$throwNew($TransformerConfigurationException, $(err->toString()), static_cast<$Throwable*>(e));
	}
}

$Translet* TemplatesImpl::getTransletInstance() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	try {
		if (this->_name == nullptr) {
			return nullptr;
		}
		if (this->_class == nullptr) {
			defineTransletClasses();
		}
		$var($AbstractTranslet, translet, $cast($AbstractTranslet, $nc($($nc($nc(this->_class)->get(this->_transletIndex))->getConstructor($$new($ClassArray, 0))))->newInstance($$new($ObjectArray, 0))));
		$nc(translet)->postInitialization();
		translet->setTemplates(this);
		translet->setOverrideDefaultParser(this->_overrideDefaultParser);
		translet->setAllowedProtocols(this->_accessExternalStylesheet);
		if (this->_auxClasses != nullptr) {
			translet->setAuxiliaryClasses(this->_auxClasses);
		}
		return translet;
	} catch ($InstantiationException& e) {
		$init($ErrorMsg);
		$var($ErrorMsg, err, $new($ErrorMsg, $ErrorMsg::TRANSLET_OBJECT_ERR, $of(this->_name)));
		$throwNew($TransformerConfigurationException, $(err->toString()), static_cast<$Throwable*>(e));
	} catch ($IllegalAccessException& e) {
		$init($ErrorMsg);
		$var($ErrorMsg, err, $new($ErrorMsg, $ErrorMsg::TRANSLET_OBJECT_ERR, $of(this->_name)));
		$throwNew($TransformerConfigurationException, $(err->toString()), static_cast<$Throwable*>(e));
	} catch ($NoSuchMethodException& e) {
		$init($ErrorMsg);
		$var($ErrorMsg, err, $new($ErrorMsg, $ErrorMsg::TRANSLET_OBJECT_ERR, $of(this->_name)));
		$throwNew($TransformerConfigurationException, $(err->toString()), static_cast<$Throwable*>(e));
	} catch ($InvocationTargetException& e) {
		$init($ErrorMsg);
		$var($ErrorMsg, err, $new($ErrorMsg, $ErrorMsg::TRANSLET_OBJECT_ERR, $of(this->_name)));
		$throwNew($TransformerConfigurationException, $(err->toString()), static_cast<$Throwable*>(e));
	}
	$shouldNotReachHere();
}

$Transformer* TemplatesImpl::newTransformer() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($TransformerImpl, transformer, nullptr);
		$assign(transformer, $new($TransformerImpl, $(getTransletInstance()), this->_outputProperties, this->_indentNumber, this->_tfactory));
		if (this->_uriResolver != nullptr) {
			transformer->setURIResolver(this->_uriResolver);
		}
		$init($XMLConstants);
		if ($nc(this->_tfactory)->getFeature($XMLConstants::FEATURE_SECURE_PROCESSING)) {
			transformer->setSecureProcessing(true);
		}
		return transformer;
	}
}

$Properties* TemplatesImpl::getOutputProperties() {
	$synchronized(this) {
		try {
			return $nc($(newTransformer()))->getOutputProperties();
		} catch ($TransformerConfigurationException& e) {
			return nullptr;
		}
	}
	$shouldNotReachHere();
}

$DOM* TemplatesImpl::getStylesheetDOM() {
	return $cast($DOM, $nc(this->_sdom)->get());
}

void TemplatesImpl::setStylesheetDOM($DOM* sdom) {
	$nc(this->_sdom)->set(sdom);
}

void TemplatesImpl::lambda$defineTransletClasses$2($Module* thisModule, $Module* m, $PermissionCollection* perms, $String* p) {
	$init(TemplatesImpl);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$nc(thisModule)->addExports(p, m);
	$nc(perms)->add($$new($RuntimePermission, $$str({"accessClassInPackage."_s, p})));
}

$ModuleLayer* TemplatesImpl::lambda$createModule$1($ModuleLayer* bootLayer, $Configuration* cf, $ClassLoader* loader) {
	$init(TemplatesImpl);
	return $nc(bootLayer)->defineModules(cf, static_cast<$Function*>($$new(TemplatesImpl$$Lambda$lambda$createModule$0$2, loader)));
}

$ClassLoader* TemplatesImpl::lambda$createModule$0($ClassLoader* loader, $String* name) {
	$init(TemplatesImpl);
	return loader;
}

void clinit$TemplatesImpl($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(TemplatesImpl::DESERIALIZE_TRANSLET, "jdk.xml.enableTemplatesImplDeserialization"_s);
	TemplatesImpl::$assertionsDisabled = !TemplatesImpl::class$->desiredAssertionStatus();
	$assignStatic(TemplatesImpl::ABSTRACT_TRANSLET, "com.sun.org.apache.xalan.internal.xsltc.runtime.AbstractTranslet"_s);
	$load($byteArray2);
	$load($ClassArray);
	$init($Integer);
	$load($Properties);
	$assignStatic(TemplatesImpl::serialPersistentFields, $new($ObjectStreamFieldArray, {
		$$new($ObjectStreamField, "_name"_s, $String::class$),
		$$new($ObjectStreamField, "_bytecodes"_s, $getClass($byteArray2)),
		$$new($ObjectStreamField, "_class"_s, $getClass($ClassArray)),
		$$new($ObjectStreamField, "_transletIndex"_s, $Integer::TYPE),
		$$new($ObjectStreamField, "_outputProperties"_s, $Properties::class$),
		$$new($ObjectStreamField, "_indentNumber"_s, $Integer::TYPE)
	}));
}

TemplatesImpl::TemplatesImpl() {
}

$Class* TemplatesImpl::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(TemplatesImpl$$Lambda$lambda$createModule$1::classInfo$.name)) {
			return TemplatesImpl$$Lambda$lambda$createModule$1::load$(name, initialize);
		}
		if (name->equals(TemplatesImpl$$Lambda$lambda$defineTransletClasses$2$1::classInfo$.name)) {
			return TemplatesImpl$$Lambda$lambda$defineTransletClasses$2$1::load$(name, initialize);
		}
		if (name->equals(TemplatesImpl$$Lambda$lambda$createModule$0$2::classInfo$.name)) {
			return TemplatesImpl$$Lambda$lambda$createModule$0$2::load$(name, initialize);
		}
	}
	$loadClass(TemplatesImpl, name, initialize, &_TemplatesImpl_ClassInfo_, clinit$TemplatesImpl, allocate$TemplatesImpl);
	return class$;
}

$Class* TemplatesImpl::class$ = nullptr;

							} // trax
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com