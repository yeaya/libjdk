#include <javax/imageio/metadata/IIOMetadata.h>

#include <java/io/Serializable.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/Module.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <javax/imageio/metadata/IIOMetadataController.h>
#include <javax/imageio/metadata/IIOMetadataFormat.h>
#include <javax/imageio/metadata/IIOMetadataFormatImpl.h>
#include <javax/imageio/metadata/IIOMetadataNode.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Module = ::java::lang::Module;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Method = ::java::lang::reflect::Method;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $IIOMetadataController = ::javax::imageio::metadata::IIOMetadataController;
using $IIOMetadataFormat = ::javax::imageio::metadata::IIOMetadataFormat;
using $IIOMetadataFormatImpl = ::javax::imageio::metadata::IIOMetadataFormatImpl;
using $IIOMetadataNode = ::javax::imageio::metadata::IIOMetadataNode;
using $Element = ::org::w3c::dom::Element;
using $Node = ::org::w3c::dom::Node;

namespace javax {
	namespace imageio {
		namespace metadata {

class IIOMetadata$$Lambda$lambda$getMetadataFormat$0 : public $PrivilegedAction {
	$class(IIOMetadata$$Lambda$lambda$getMetadataFormat$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$(IIOMetadata* inst, $String* className) {
		$set(this, inst$, inst);
		$set(this, className, className);
	}
	virtual $Object* run() override {
		 return $of($nc(inst$)->lambda$getMetadataFormat$0(className));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<IIOMetadata$$Lambda$lambda$getMetadataFormat$0>());
	}
	IIOMetadata* inst$ = nullptr;
	$String* className = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo IIOMetadata$$Lambda$lambda$getMetadataFormat$0::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(IIOMetadata$$Lambda$lambda$getMetadataFormat$0, inst$)},
	{"className", "Ljava/lang/String;", nullptr, $PUBLIC, $field(IIOMetadata$$Lambda$lambda$getMetadataFormat$0, className)},
	{}
};
$MethodInfo IIOMetadata$$Lambda$lambda$getMetadataFormat$0::methodInfos[3] = {
	{"<init>", "(Ljavax/imageio/metadata/IIOMetadata;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(IIOMetadata$$Lambda$lambda$getMetadataFormat$0, init$, void, IIOMetadata*, $String*)},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(IIOMetadata$$Lambda$lambda$getMetadataFormat$0, run, $Object*)},
	{}
};
$ClassInfo IIOMetadata$$Lambda$lambda$getMetadataFormat$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.imageio.metadata.IIOMetadata$$Lambda$lambda$getMetadataFormat$0",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	fieldInfos,
	methodInfos
};
$Class* IIOMetadata$$Lambda$lambda$getMetadataFormat$0::load$($String* name, bool initialize) {
	$loadClass(IIOMetadata$$Lambda$lambda$getMetadataFormat$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* IIOMetadata$$Lambda$lambda$getMetadataFormat$0::class$ = nullptr;

$FieldInfo _IIOMetadata_FieldInfo_[] = {
	{"standardFormatSupported", "Z", nullptr, $PROTECTED, $field(IIOMetadata, standardFormatSupported)},
	{"nativeMetadataFormatName", "Ljava/lang/String;", nullptr, $PROTECTED, $field(IIOMetadata, nativeMetadataFormatName)},
	{"nativeMetadataFormatClassName", "Ljava/lang/String;", nullptr, $PROTECTED, $field(IIOMetadata, nativeMetadataFormatClassName)},
	{"extraMetadataFormatNames", "[Ljava/lang/String;", nullptr, $PROTECTED, $field(IIOMetadata, extraMetadataFormatNames)},
	{"extraMetadataFormatClassNames", "[Ljava/lang/String;", nullptr, $PROTECTED, $field(IIOMetadata, extraMetadataFormatClassNames)},
	{"defaultController", "Ljavax/imageio/metadata/IIOMetadataController;", nullptr, $PROTECTED, $field(IIOMetadata, defaultController)},
	{"controller", "Ljavax/imageio/metadata/IIOMetadataController;", nullptr, $PROTECTED, $field(IIOMetadata, controller)},
	{}
};

$MethodInfo _IIOMetadata_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(IIOMetadata, init$, void)},
	{"<init>", "(ZLjava/lang/String;Ljava/lang/String;[Ljava/lang/String;[Ljava/lang/String;)V", nullptr, $PROTECTED, $method(IIOMetadata, init$, void, bool, $String*, $String*, $StringArray*, $StringArray*)},
	{"activateController", "()Z", nullptr, $PUBLIC, $virtualMethod(IIOMetadata, activateController, bool)},
	{"append", "(Ljavax/imageio/metadata/IIOMetadataNode;Ljavax/imageio/metadata/IIOMetadataNode;)V", nullptr, $PRIVATE, $method(IIOMetadata, append, void, $IIOMetadataNode*, $IIOMetadataNode*)},
	{"getAsTree", "(Ljava/lang/String;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(IIOMetadata, getAsTree, $Node*, $String*)},
	{"getController", "()Ljavax/imageio/metadata/IIOMetadataController;", nullptr, $PUBLIC, $virtualMethod(IIOMetadata, getController, $IIOMetadataController*)},
	{"getDefaultController", "()Ljavax/imageio/metadata/IIOMetadataController;", nullptr, $PUBLIC, $virtualMethod(IIOMetadata, getDefaultController, $IIOMetadataController*)},
	{"getExtraMetadataFormatNames", "()[Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(IIOMetadata, getExtraMetadataFormatNames, $StringArray*)},
	{"getMetadataFormat", "(Ljava/lang/String;)Ljavax/imageio/metadata/IIOMetadataFormat;", nullptr, $PUBLIC, $virtualMethod(IIOMetadata, getMetadataFormat, $IIOMetadataFormat*, $String*)},
	{"getMetadataFormatClass", "(Ljava/lang/String;)Ljava/lang/Class;", "(Ljava/lang/String;)Ljava/lang/Class<*>;", $PRIVATE, $method(IIOMetadata, getMetadataFormatClass, $Class*, $String*)},
	{"getMetadataFormatNames", "()[Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(IIOMetadata, getMetadataFormatNames, $StringArray*)},
	{"getNativeMetadataFormatName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(IIOMetadata, getNativeMetadataFormatName, $String*)},
	{"getStandardChromaNode", "()Ljavax/imageio/metadata/IIOMetadataNode;", nullptr, $PROTECTED, $virtualMethod(IIOMetadata, getStandardChromaNode, $IIOMetadataNode*)},
	{"getStandardCompressionNode", "()Ljavax/imageio/metadata/IIOMetadataNode;", nullptr, $PROTECTED, $virtualMethod(IIOMetadata, getStandardCompressionNode, $IIOMetadataNode*)},
	{"getStandardDataNode", "()Ljavax/imageio/metadata/IIOMetadataNode;", nullptr, $PROTECTED, $virtualMethod(IIOMetadata, getStandardDataNode, $IIOMetadataNode*)},
	{"getStandardDimensionNode", "()Ljavax/imageio/metadata/IIOMetadataNode;", nullptr, $PROTECTED, $virtualMethod(IIOMetadata, getStandardDimensionNode, $IIOMetadataNode*)},
	{"getStandardDocumentNode", "()Ljavax/imageio/metadata/IIOMetadataNode;", nullptr, $PROTECTED, $virtualMethod(IIOMetadata, getStandardDocumentNode, $IIOMetadataNode*)},
	{"getStandardTextNode", "()Ljavax/imageio/metadata/IIOMetadataNode;", nullptr, $PROTECTED, $virtualMethod(IIOMetadata, getStandardTextNode, $IIOMetadataNode*)},
	{"getStandardTileNode", "()Ljavax/imageio/metadata/IIOMetadataNode;", nullptr, $PROTECTED, $virtualMethod(IIOMetadata, getStandardTileNode, $IIOMetadataNode*)},
	{"getStandardTransparencyNode", "()Ljavax/imageio/metadata/IIOMetadataNode;", nullptr, $PROTECTED, $virtualMethod(IIOMetadata, getStandardTransparencyNode, $IIOMetadataNode*)},
	{"getStandardTree", "()Ljavax/imageio/metadata/IIOMetadataNode;", nullptr, $PROTECTED | $FINAL, $method(IIOMetadata, getStandardTree, $IIOMetadataNode*)},
	{"hasController", "()Z", nullptr, $PUBLIC, $virtualMethod(IIOMetadata, hasController, bool)},
	{"isReadOnly", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(IIOMetadata, isReadOnly, bool)},
	{"isStandardMetadataFormatSupported", "()Z", nullptr, $PUBLIC, $virtualMethod(IIOMetadata, isStandardMetadataFormatSupported, bool)},
	{"lambda$getMetadataFormat$0", "(Ljava/lang/String;)Ljava/lang/Class;", nullptr, $PRIVATE | $SYNTHETIC, $method(IIOMetadata, lambda$getMetadataFormat$0, $Class*, $String*)},
	{"mergeTree", "(Ljava/lang/String;Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(IIOMetadata, mergeTree, void, $String*, $Node*), "javax.imageio.metadata.IIOInvalidTreeException"},
	{"reset", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(IIOMetadata, reset, void)},
	{"setController", "(Ljavax/imageio/metadata/IIOMetadataController;)V", nullptr, $PUBLIC, $virtualMethod(IIOMetadata, setController, void, $IIOMetadataController*)},
	{"setFromTree", "(Ljava/lang/String;Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC, $virtualMethod(IIOMetadata, setFromTree, void, $String*, $Node*), "javax.imageio.metadata.IIOInvalidTreeException"},
	{}
};

$ClassInfo _IIOMetadata_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.imageio.metadata.IIOMetadata",
	"java.lang.Object",
	nullptr,
	_IIOMetadata_FieldInfo_,
	_IIOMetadata_MethodInfo_
};

$Object* allocate$IIOMetadata($Class* clazz) {
	return $of($alloc(IIOMetadata));
}

void IIOMetadata::init$() {
	$set(this, nativeMetadataFormatName, nullptr);
	$set(this, nativeMetadataFormatClassName, nullptr);
	$set(this, extraMetadataFormatNames, nullptr);
	$set(this, extraMetadataFormatClassNames, nullptr);
	$set(this, defaultController, nullptr);
	$set(this, controller, nullptr);
}

void IIOMetadata::init$(bool standardMetadataFormatSupported, $String* nativeMetadataFormatName, $String* nativeMetadataFormatClassName, $StringArray* extraMetadataFormatNames, $StringArray* extraMetadataFormatClassNames) {
	$set(this, nativeMetadataFormatName, nullptr);
	$set(this, nativeMetadataFormatClassName, nullptr);
	$set(this, extraMetadataFormatNames, nullptr);
	$set(this, extraMetadataFormatClassNames, nullptr);
	$set(this, defaultController, nullptr);
	$set(this, controller, nullptr);
	this->standardFormatSupported = standardMetadataFormatSupported;
	$set(this, nativeMetadataFormatName, nativeMetadataFormatName);
	$set(this, nativeMetadataFormatClassName, nativeMetadataFormatClassName);
	if (extraMetadataFormatNames != nullptr) {
		if (extraMetadataFormatNames->length == 0) {
			$throwNew($IllegalArgumentException, "extraMetadataFormatNames.length == 0!"_s);
		}
		if (extraMetadataFormatClassNames == nullptr) {
			$throwNew($IllegalArgumentException, "extraMetadataFormatNames != null && extraMetadataFormatClassNames == null!"_s);
		}
		if ($nc(extraMetadataFormatClassNames)->length != extraMetadataFormatNames->length) {
			$throwNew($IllegalArgumentException, "extraMetadataFormatClassNames.length != extraMetadataFormatNames.length!"_s);
		}
		$set(this, extraMetadataFormatNames, $cast($StringArray, extraMetadataFormatNames->clone()));
		$set(this, extraMetadataFormatClassNames, $cast($StringArray, $nc(extraMetadataFormatClassNames)->clone()));
	} else if (extraMetadataFormatClassNames != nullptr) {
		$throwNew($IllegalArgumentException, "extraMetadataFormatNames == null && extraMetadataFormatClassNames != null!"_s);
	}
}

bool IIOMetadata::isStandardMetadataFormatSupported() {
	return this->standardFormatSupported;
}

$String* IIOMetadata::getNativeMetadataFormatName() {
	return this->nativeMetadataFormatName;
}

$StringArray* IIOMetadata::getExtraMetadataFormatNames() {
	if (this->extraMetadataFormatNames == nullptr) {
		return nullptr;
	}
	return $cast($StringArray, $nc(this->extraMetadataFormatNames)->clone());
}

$StringArray* IIOMetadata::getMetadataFormatNames() {
	$useLocalCurrentObjectStackCache();
	$var($String, nativeName, getNativeMetadataFormatName());
	$init($IIOMetadataFormatImpl);
	$var($String, standardName, isStandardMetadataFormatSupported() ? $IIOMetadataFormatImpl::standardMetadataFormatName : ($String*)nullptr);
	$var($StringArray, extraNames, getExtraMetadataFormatNames());
	int32_t numFormats = 0;
	if (nativeName != nullptr) {
		++numFormats;
	}
	if (standardName != nullptr) {
		++numFormats;
	}
	if (extraNames != nullptr) {
		numFormats += extraNames->length;
	}
	if (numFormats == 0) {
		return nullptr;
	}
	$var($StringArray, formats, $new($StringArray, numFormats));
	int32_t index = 0;
	if (nativeName != nullptr) {
		formats->set(index++, nativeName);
	}
	if (standardName != nullptr) {
		formats->set(index++, standardName);
	}
	if (extraNames != nullptr) {
		for (int32_t i = 0; i < extraNames->length; ++i) {
			formats->set(index++, extraNames->get(i));
		}
	}
	return formats;
}

$IIOMetadataFormat* IIOMetadata::getMetadataFormat($String* formatName) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if (formatName == nullptr) {
		$throwNew($IllegalArgumentException, "formatName == null!"_s);
	}
	$init($IIOMetadataFormatImpl);
	if (this->standardFormatSupported && $nc(formatName)->equals($IIOMetadataFormatImpl::standardMetadataFormatName)) {
		return $IIOMetadataFormatImpl::getStandardFormatInstance();
	}
	$var($String, formatClassName, nullptr);
	if ($nc(formatName)->equals(this->nativeMetadataFormatName)) {
		$assign(formatClassName, this->nativeMetadataFormatClassName);
	} else if (this->extraMetadataFormatNames != nullptr) {
		for (int32_t i = 0; i < $nc(this->extraMetadataFormatNames)->length; ++i) {
			if (formatName->equals($nc(this->extraMetadataFormatNames)->get(i))) {
				$assign(formatClassName, $nc(this->extraMetadataFormatClassNames)->get(i));
				break;
			}
		}
	}
	if (formatClassName == nullptr) {
		$throwNew($IllegalArgumentException, "Unsupported format name"_s);
	}
	try {
		$var($String, className, formatClassName);
		$var($PrivilegedAction, pa, static_cast<$PrivilegedAction*>($new(IIOMetadata$$Lambda$lambda$getMetadataFormat$0, this, className)));
		$Class* cls = $cast($Class, $AccessController::doPrivileged(pa));
		$var($Method, meth, $nc(cls)->getMethod("getInstance"_s, $$new($ClassArray, 0)));
		return $cast($IIOMetadataFormat, $nc(meth)->invoke(nullptr, $$new($ObjectArray, 0)));
	} catch ($Exception& e) {
		$var($RuntimeException, ex, $new($IllegalStateException, "Can\'t obtain format"_s));
		ex->initCause(e);
		$throw(ex);
	}
	$shouldNotReachHere();
}

$Class* IIOMetadata::getMetadataFormatClass($String* formatClassName) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($Module, thisModule, IIOMetadata::class$->getModule());
	$var($Module, targetModule, $of(this)->getClass()->getModule());
	$Class* c = nullptr;
	try {
		$var($ClassLoader, cl, $of(this)->getClass()->getClassLoader());
		c = $Class::forName(formatClassName, false, cl);
		$load($IIOMetadataFormat);
		if (!$IIOMetadataFormat::class$->isAssignableFrom(c)) {
			return nullptr;
		}
	} catch ($ClassNotFoundException& e) {
	}
	if ($nc($of(thisModule))->equals(targetModule) || c == nullptr) {
		return c;
	}
	if ($nc(targetModule)->isNamed()) {
		int32_t i = $nc(formatClassName)->lastIndexOf("."_s);
		$var($String, pn, i > 0 ? formatClassName->substring(0, i) : ""_s);
		if (!targetModule->isExported(pn, thisModule)) {
			$throwNew($IllegalStateException, $$str({"Class "_s, formatClassName, " in named module must be exported to java.desktop module."_s}));
		}
	}
	return c;
}

$IIOMetadataNode* IIOMetadata::getStandardChromaNode() {
	return nullptr;
}

$IIOMetadataNode* IIOMetadata::getStandardCompressionNode() {
	return nullptr;
}

$IIOMetadataNode* IIOMetadata::getStandardDataNode() {
	return nullptr;
}

$IIOMetadataNode* IIOMetadata::getStandardDimensionNode() {
	return nullptr;
}

$IIOMetadataNode* IIOMetadata::getStandardDocumentNode() {
	return nullptr;
}

$IIOMetadataNode* IIOMetadata::getStandardTextNode() {
	return nullptr;
}

$IIOMetadataNode* IIOMetadata::getStandardTileNode() {
	return nullptr;
}

$IIOMetadataNode* IIOMetadata::getStandardTransparencyNode() {
	return nullptr;
}

void IIOMetadata::append($IIOMetadataNode* root, $IIOMetadataNode* node) {
	if (node != nullptr) {
		$nc(root)->appendChild(node);
	}
}

$IIOMetadataNode* IIOMetadata::getStandardTree() {
	$useLocalCurrentObjectStackCache();
	$init($IIOMetadataFormatImpl);
	$var($IIOMetadataNode, root, $new($IIOMetadataNode, $IIOMetadataFormatImpl::standardMetadataFormatName));
	append(root, $(getStandardChromaNode()));
	append(root, $(getStandardCompressionNode()));
	append(root, $(getStandardDataNode()));
	append(root, $(getStandardDimensionNode()));
	append(root, $(getStandardDocumentNode()));
	append(root, $(getStandardTextNode()));
	append(root, $(getStandardTileNode()));
	append(root, $(getStandardTransparencyNode()));
	return root;
}

void IIOMetadata::setFromTree($String* formatName, $Node* root) {
	reset();
	mergeTree(formatName, root);
}

void IIOMetadata::setController($IIOMetadataController* controller) {
	$set(this, controller, controller);
}

$IIOMetadataController* IIOMetadata::getController() {
	return this->controller;
}

$IIOMetadataController* IIOMetadata::getDefaultController() {
	return this->defaultController;
}

bool IIOMetadata::hasController() {
	return (getController() != nullptr);
}

bool IIOMetadata::activateController() {
	if (!hasController()) {
		$throwNew($IllegalStateException, "hasController() == false!"_s);
	}
	return $nc($(getController()))->activate(this);
}

$Class* IIOMetadata::lambda$getMetadataFormat$0($String* className) {
	return getMetadataFormatClass(className);
}

IIOMetadata::IIOMetadata() {
}

$Class* IIOMetadata::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(IIOMetadata$$Lambda$lambda$getMetadataFormat$0::classInfo$.name)) {
			return IIOMetadata$$Lambda$lambda$getMetadataFormat$0::load$(name, initialize);
		}
	}
	$loadClass(IIOMetadata, name, initialize, &_IIOMetadata_ClassInfo_, allocate$IIOMetadata);
	return class$;
}

$Class* IIOMetadata::class$ = nullptr;

		} // metadata
	} // imageio
} // javax