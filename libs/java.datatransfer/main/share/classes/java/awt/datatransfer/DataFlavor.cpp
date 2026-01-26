#include <java/awt/datatransfer/DataFlavor.h>

#include <java/awt/datatransfer/MimeType.h>
#include <java/awt/datatransfer/MimeTypeParameterList.h>
#include <java/awt/datatransfer/MimeTypeParseException.h>
#include <java/awt/datatransfer/Transferable.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/CharArrayReader.h>
#include <java/io/Externalizable.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/InputStreamReader.h>
#include <java/io/ObjectInput.h>
#include <java/io/ObjectOutput.h>
#include <java/io/OptionalDataException.h>
#include <java/io/Reader.h>
#include <java/io/Serializable.h>
#include <java/io/StringReader.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/RuntimePermission.h>
#include <java/lang/SecurityException.h>
#include <java/lang/SecurityManager.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/CharBuffer.h>
#include <java/security/BasicPermission.h>
#include <java/security/Permission.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/Comparator.h>
#include <java/util/List.h>
#include <java/util/Objects.h>
#include <sun/datatransfer/DataFlavorUtil$RMI.h>
#include <sun/datatransfer/DataFlavorUtil.h>
#include <sun/datatransfer/DesktopDatatransferService.h>
#include <sun/reflect/misc/ReflectUtil.h>
#include <jcpp.h>

using $DataFlavorArray = $Array<::java::awt::datatransfer::DataFlavor>;
using $MimeType = ::java::awt::datatransfer::MimeType;
using $MimeTypeParameterList = ::java::awt::datatransfer::MimeTypeParameterList;
using $MimeTypeParseException = ::java::awt::datatransfer::MimeTypeParseException;
using $Transferable = ::java::awt::datatransfer::Transferable;
using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $CharArrayReader = ::java::io::CharArrayReader;
using $Externalizable = ::java::io::Externalizable;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $InputStreamReader = ::java::io::InputStreamReader;
using $ObjectInput = ::java::io::ObjectInput;
using $ObjectOutput = ::java::io::ObjectOutput;
using $OptionalDataException = ::java::io::OptionalDataException;
using $Reader = ::java::io::Reader;
using $Serializable = ::java::io::Serializable;
using $StringReader = ::java::io::StringReader;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimePermission = ::java::lang::RuntimePermission;
using $SecurityException = ::java::lang::SecurityException;
using $SecurityManager = ::java::lang::SecurityManager;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $CharBuffer = ::java::nio::CharBuffer;
using $BasicPermission = ::java::security::BasicPermission;
using $Permission = ::java::security::Permission;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $List = ::java::util::List;
using $Objects = ::java::util::Objects;
using $DataFlavorUtil = ::sun::datatransfer::DataFlavorUtil;
using $DataFlavorUtil$RMI = ::sun::datatransfer::DataFlavorUtil$RMI;
using $DesktopDatatransferService = ::sun::datatransfer::DesktopDatatransferService;
using $ReflectUtil = ::sun::reflect::misc::ReflectUtil;

namespace java {
	namespace awt {
		namespace datatransfer {

$CompoundAttribute _DataFlavor_FieldAnnotations_plainTextFlavor[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _DataFlavor_MethodAnnotations_equals11[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _DataFlavor_MethodAnnotations_normalizeMimeType41[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _DataFlavor_MethodAnnotations_normalizeMimeTypeParameter42[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _DataFlavor_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DataFlavor, serialVersionUID)},
	{"stringFlavor", "Ljava/awt/datatransfer/DataFlavor;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DataFlavor, stringFlavor)},
	{"imageFlavor", "Ljava/awt/datatransfer/DataFlavor;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DataFlavor, imageFlavor)},
	{"plainTextFlavor", "Ljava/awt/datatransfer/DataFlavor;", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $staticField(DataFlavor, plainTextFlavor), _DataFlavor_FieldAnnotations_plainTextFlavor},
	{"javaSerializedObjectMimeType", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DataFlavor, javaSerializedObjectMimeType)},
	{"javaFileListFlavor", "Ljava/awt/datatransfer/DataFlavor;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DataFlavor, javaFileListFlavor)},
	{"javaJVMLocalObjectMimeType", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DataFlavor, javaJVMLocalObjectMimeType)},
	{"javaRemoteObjectMimeType", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DataFlavor, javaRemoteObjectMimeType)},
	{"selectionHtmlFlavor", "Ljava/awt/datatransfer/DataFlavor;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DataFlavor, selectionHtmlFlavor)},
	{"fragmentHtmlFlavor", "Ljava/awt/datatransfer/DataFlavor;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DataFlavor, fragmentHtmlFlavor)},
	{"allHtmlFlavor", "Ljava/awt/datatransfer/DataFlavor;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DataFlavor, allHtmlFlavor)},
	{"atom", "I", nullptr, $TRANSIENT, $field(DataFlavor, atom)},
	{"mimeType", "Ljava/awt/datatransfer/MimeType;", nullptr, 0, $field(DataFlavor, mimeType)},
	{"humanPresentableName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(DataFlavor, humanPresentableName)},
	{"representationClass", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE, $field(DataFlavor, representationClass)},
	{}
};

$MethodInfo _DataFlavor_MethodInfo_[] = {
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "()V", nullptr, $PUBLIC, $method(DataFlavor, init$, void)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/awt/datatransfer/MimeTypeParameterList;Ljava/lang/Class;Ljava/lang/String;)V", "(Ljava/lang/String;Ljava/lang/String;Ljava/awt/datatransfer/MimeTypeParameterList;Ljava/lang/Class<*>;Ljava/lang/String;)V", $PRIVATE, $method(DataFlavor, init$, void, $String*, $String*, $MimeTypeParameterList*, $Class*, $String*)},
	{"<init>", "(Ljava/lang/Class;Ljava/lang/String;)V", "(Ljava/lang/Class<*>;Ljava/lang/String;)V", $PUBLIC, $method(DataFlavor, init$, void, $Class*, $String*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(DataFlavor, init$, void, $String*, $String*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/ClassLoader;)V", nullptr, $PUBLIC, $method(DataFlavor, init$, void, $String*, $String*, $ClassLoader*), "java.lang.ClassNotFoundException"},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(DataFlavor, init$, void, $String*), "java.lang.ClassNotFoundException"},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(DataFlavor, clone, $Object*), "java.lang.CloneNotSupportedException"},
	{"createConstant", "(Ljava/lang/Class;Ljava/lang/String;)Ljava/awt/datatransfer/DataFlavor;", "(Ljava/lang/Class<*>;Ljava/lang/String;)Ljava/awt/datatransfer/DataFlavor;", $PRIVATE | $STATIC, $staticMethod(DataFlavor, createConstant, DataFlavor*, $Class*, $String*)},
	{"createConstant", "(Ljava/lang/String;Ljava/lang/String;)Ljava/awt/datatransfer/DataFlavor;", nullptr, $PRIVATE | $STATIC, $staticMethod(DataFlavor, createConstant, DataFlavor*, $String*, $String*)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(DataFlavor, equals, bool, Object$*)},
	{"equals", "(Ljava/awt/datatransfer/DataFlavor;)Z", nullptr, $PUBLIC, $virtualMethod(DataFlavor, equals, bool, DataFlavor*)},
	{"equals", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(DataFlavor, equals, bool, $String*), nullptr, nullptr, _DataFlavor_MethodAnnotations_equals11},
	{"getDefaultRepresentationClass", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PUBLIC | $FINAL, $method(DataFlavor, getDefaultRepresentationClass, $Class*)},
	{"getDefaultRepresentationClassAsString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $method(DataFlavor, getDefaultRepresentationClassAsString, $String*)},
	{"getHumanPresentableName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DataFlavor, getHumanPresentableName, $String*)},
	{"getMimeType", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DataFlavor, getMimeType, $String*)},
	{"getParameter", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DataFlavor, getParameter, $String*, $String*)},
	{"getPrimaryType", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DataFlavor, getPrimaryType, $String*)},
	{"getReaderForText", "(Ljava/awt/datatransfer/Transferable;)Ljava/io/Reader;", nullptr, $PUBLIC, $virtualMethod(DataFlavor, getReaderForText, $Reader*, $Transferable*), "java.awt.datatransfer.UnsupportedFlavorException,java.io.IOException"},
	{"getRepresentationClass", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PUBLIC, $virtualMethod(DataFlavor, getRepresentationClass, $Class*)},
	{"getSubType", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DataFlavor, getSubType, $String*)},
	{"getTextPlainUnicodeFlavor", "()Ljava/awt/datatransfer/DataFlavor;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(DataFlavor, getTextPlainUnicodeFlavor, DataFlavor*)},
	{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(DataFlavor, hashCode, int32_t)},
	{"initHtml", "(Ljava/lang/String;)Ljava/awt/datatransfer/DataFlavor;", nullptr, $PRIVATE | $STATIC, $staticMethod(DataFlavor, initHtml, DataFlavor*, $String*)},
	{"initialize", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/ClassLoader;)V", nullptr, $PRIVATE, $method(DataFlavor, initialize, void, $String*, $String*, $ClassLoader*), "java.awt.datatransfer.MimeTypeParseException,java.lang.ClassNotFoundException"},
	{"isFlavorJavaFileListType", "()Z", nullptr, $PUBLIC, $virtualMethod(DataFlavor, isFlavorJavaFileListType, bool)},
	{"isFlavorRemoteObjectType", "()Z", nullptr, $PUBLIC, $virtualMethod(DataFlavor, isFlavorRemoteObjectType, bool)},
	{"isFlavorSerializedObjectType", "()Z", nullptr, $PUBLIC, $virtualMethod(DataFlavor, isFlavorSerializedObjectType, bool)},
	{"isFlavorTextType", "()Z", nullptr, $PUBLIC, $virtualMethod(DataFlavor, isFlavorTextType, bool)},
	{"isMimeTypeEqual", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(DataFlavor, isMimeTypeEqual, bool, $String*)},
	{"isMimeTypeEqual", "(Ljava/awt/datatransfer/DataFlavor;)Z", nullptr, $PUBLIC | $FINAL, $method(DataFlavor, isMimeTypeEqual, bool, DataFlavor*)},
	{"isMimeTypeEqual", "(Ljava/awt/datatransfer/MimeType;)Z", nullptr, $PRIVATE, $method(DataFlavor, isMimeTypeEqual, bool, $MimeType*)},
	{"isMimeTypeSerializedObject", "()Z", nullptr, $PUBLIC, $virtualMethod(DataFlavor, isMimeTypeSerializedObject, bool)},
	{"isRepresentationClassByteBuffer", "()Z", nullptr, $PUBLIC, $virtualMethod(DataFlavor, isRepresentationClassByteBuffer, bool)},
	{"isRepresentationClassCharBuffer", "()Z", nullptr, $PUBLIC, $virtualMethod(DataFlavor, isRepresentationClassCharBuffer, bool)},
	{"isRepresentationClassInputStream", "()Z", nullptr, $PUBLIC, $virtualMethod(DataFlavor, isRepresentationClassInputStream, bool)},
	{"isRepresentationClassReader", "()Z", nullptr, $PUBLIC, $virtualMethod(DataFlavor, isRepresentationClassReader, bool)},
	{"isRepresentationClassRemote", "()Z", nullptr, $PUBLIC, $virtualMethod(DataFlavor, isRepresentationClassRemote, bool)},
	{"isRepresentationClassSerializable", "()Z", nullptr, $PUBLIC, $virtualMethod(DataFlavor, isRepresentationClassSerializable, bool)},
	{"isStandardTextRepresentationClass", "()Z", nullptr, $PRIVATE, $method(DataFlavor, isStandardTextRepresentationClass, bool)},
	{"match", "(Ljava/awt/datatransfer/DataFlavor;)Z", nullptr, $PUBLIC, $virtualMethod(DataFlavor, match, bool, DataFlavor*)},
	{"normalizeMimeType", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PROTECTED | $DEPRECATED, $virtualMethod(DataFlavor, normalizeMimeType, $String*, $String*), nullptr, nullptr, _DataFlavor_MethodAnnotations_normalizeMimeType41},
	{"normalizeMimeTypeParameter", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PROTECTED | $DEPRECATED, $virtualMethod(DataFlavor, normalizeMimeTypeParameter, $String*, $String*, $String*), nullptr, nullptr, _DataFlavor_MethodAnnotations_normalizeMimeTypeParameter42},
	{"paramString", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(DataFlavor, paramString, $String*)},
	{"readExternal", "(Ljava/io/ObjectInput;)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(DataFlavor, readExternal, void, $ObjectInput*), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"selectBestTextFlavor", "([Ljava/awt/datatransfer/DataFlavor;)Ljava/awt/datatransfer/DataFlavor;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(DataFlavor, selectBestTextFlavor, DataFlavor*, $DataFlavorArray*)},
	{"setHumanPresentableName", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(DataFlavor, setHumanPresentableName, void, $String*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DataFlavor, toString, $String*)},
	{"tryToLoadClass", "(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljava/lang/Class;", "(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljava/lang/Class<*>;", $PROTECTED | $STATIC | $FINAL, $staticMethod(DataFlavor, tryToLoadClass, $Class*, $String*, $ClassLoader*), "java.lang.ClassNotFoundException"},
	{"writeExternal", "(Ljava/io/ObjectOutput;)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(DataFlavor, writeExternal, void, $ObjectOutput*), "java.io.IOException"},
	{}
};

$ClassInfo _DataFlavor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.datatransfer.DataFlavor",
	"java.lang.Object",
	"java.io.Externalizable,java.lang.Cloneable",
	_DataFlavor_FieldInfo_,
	_DataFlavor_MethodInfo_
};

$Object* allocate$DataFlavor($Class* clazz) {
	return $of($alloc(DataFlavor));
}

void DataFlavor::finalize() {
	this->$Externalizable::finalize();
}

DataFlavor* DataFlavor::stringFlavor = nullptr;
DataFlavor* DataFlavor::imageFlavor = nullptr;
DataFlavor* DataFlavor::plainTextFlavor = nullptr;
$String* DataFlavor::javaSerializedObjectMimeType = nullptr;
DataFlavor* DataFlavor::javaFileListFlavor = nullptr;
$String* DataFlavor::javaJVMLocalObjectMimeType = nullptr;
$String* DataFlavor::javaRemoteObjectMimeType = nullptr;
DataFlavor* DataFlavor::selectionHtmlFlavor = nullptr;
DataFlavor* DataFlavor::fragmentHtmlFlavor = nullptr;
DataFlavor* DataFlavor::allHtmlFlavor = nullptr;

$Class* DataFlavor::tryToLoadClass($String* className, $ClassLoader* fallback) {
	$init(DataFlavor);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$ReflectUtil::checkPackageAccess(className);
	try {
		$var($SecurityManager, sm, $System::getSecurityManager());
		if (sm != nullptr) {
			sm->checkPermission($$new($RuntimePermission, "getClassLoader"_s));
		}
		$var($ClassLoader, loader, $ClassLoader::getSystemClassLoader());
		try {
			return $Class::forName(className, true, loader);
		} catch ($ClassNotFoundException& exception) {
			$assign(loader, $($Thread::currentThread())->getContextClassLoader());
			if (loader != nullptr) {
				try {
					return $Class::forName(className, true, loader);
				} catch ($ClassNotFoundException& e) {
				}
			}
		}
	} catch ($SecurityException& exception) {
	}
	return $Class::forName(className, true, fallback);
}

DataFlavor* DataFlavor::createConstant($Class* rc, $String* prn) {
	$init(DataFlavor);
	try {
		return $new(DataFlavor, rc, prn);
	} catch ($Exception& e) {
		return nullptr;
	}
	$shouldNotReachHere();
}

DataFlavor* DataFlavor::createConstant($String* mt, $String* prn) {
	$init(DataFlavor);
	try {
		return $new(DataFlavor, mt, prn);
	} catch ($Exception& e) {
		return nullptr;
	}
	$shouldNotReachHere();
}

DataFlavor* DataFlavor::initHtml($String* htmlFlavorType) {
	$init(DataFlavor);
	try {
		return $new(DataFlavor, $$str({"text/html; class=java.lang.String;document="_s, htmlFlavorType, ";charset=Unicode"_s}));
	} catch ($Exception& e) {
		return nullptr;
	}
	$shouldNotReachHere();
}

void DataFlavor::init$() {
}

void DataFlavor::init$($String* primaryType, $String* subType, $MimeTypeParameterList* params$renamed, $Class* representationClass, $String* humanPresentableName$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($String, humanPresentableName, humanPresentableName$renamed);
	$var($MimeTypeParameterList, params, params$renamed);
	if (primaryType == nullptr) {
		$throwNew($NullPointerException, "primaryType"_s);
	}
	if (subType == nullptr) {
		$throwNew($NullPointerException, "subType"_s);
	}
	if (representationClass == nullptr) {
		$throwNew($NullPointerException, "representationClass"_s);
	}
	if (params == nullptr) {
		$assign(params, $new($MimeTypeParameterList));
	}
	$nc(params)->set("class"_s, $($nc(representationClass)->getName()));
	if (humanPresentableName == nullptr) {
		$assign(humanPresentableName, params->get("humanPresentableName"_s));
		if (humanPresentableName == nullptr) {
			$assign(humanPresentableName, $str({primaryType, "/"_s, subType}));
		}
	}
	try {
		$set(this, mimeType, $new($MimeType, primaryType, subType, params));
	} catch ($MimeTypeParseException& mtpe) {
		$throwNew($IllegalArgumentException, $$str({"MimeType Parse Exception: "_s, $(mtpe->getMessage())}));
	}
	$set(this, representationClass, representationClass);
	$set(this, humanPresentableName, humanPresentableName);
	$nc(this->mimeType)->removeParameter("humanPresentableName"_s);
}

void DataFlavor::init$($Class* representationClass, $String* humanPresentableName) {
	DataFlavor::init$("application"_s, "x-java-serialized-object"_s, nullptr, representationClass, humanPresentableName);
	if (representationClass == nullptr) {
		$throwNew($NullPointerException, "representationClass"_s);
	}
}

void DataFlavor::init$($String* mimeType, $String* humanPresentableName) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if (mimeType == nullptr) {
		$throwNew($NullPointerException, "mimeType"_s);
	}
	try {
		initialize(mimeType, humanPresentableName, $($of(this)->getClass()->getClassLoader()));
	} catch ($MimeTypeParseException& mtpe) {
		$throwNew($IllegalArgumentException, $$str({"failed to parse:"_s, mimeType}));
	} catch ($ClassNotFoundException& cnfe) {
		$throwNew($IllegalArgumentException, $$str({"can\'t find specified class: "_s, $(cnfe->getMessage())}));
	}
}

void DataFlavor::init$($String* mimeType, $String* humanPresentableName, $ClassLoader* classLoader) {
	if (mimeType == nullptr) {
		$throwNew($NullPointerException, "mimeType"_s);
	}
	try {
		initialize(mimeType, humanPresentableName, classLoader);
	} catch ($MimeTypeParseException& mtpe) {
		$throwNew($IllegalArgumentException, $$str({"failed to parse:"_s, mimeType}));
	}
}

void DataFlavor::init$($String* mimeType) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if (mimeType == nullptr) {
		$throwNew($NullPointerException, "mimeType"_s);
	}
	try {
		initialize(mimeType, nullptr, $($of(this)->getClass()->getClassLoader()));
	} catch ($MimeTypeParseException& mtpe) {
		$throwNew($IllegalArgumentException, $$str({"failed to parse:"_s, mimeType}));
	}
}

void DataFlavor::initialize($String* mimeType, $String* humanPresentableName$renamed, $ClassLoader* classLoader) {
	$useLocalCurrentObjectStackCache();
	$var($String, humanPresentableName, humanPresentableName$renamed);
	if (mimeType == nullptr) {
		$throwNew($NullPointerException, "mimeType"_s);
	}
	$set(this, mimeType, $new($MimeType, mimeType));
	$var($String, rcn, getParameter("class"_s));
	if (rcn == nullptr) {
		if ("application/x-java-serialized-object"_s->equals($($nc(this->mimeType)->getBaseType()))) {
			$throwNew($IllegalArgumentException, $$str({"no representation class specified for:"_s, mimeType}));
		} else {
			$load($InputStream);
			$set(this, representationClass, $InputStream::class$);
		}
	} else {
		$set(this, representationClass, DataFlavor::tryToLoadClass(rcn, classLoader));
	}
	$nc(this->mimeType)->setParameter("class"_s, $($nc(this->representationClass)->getName()));
	if (humanPresentableName == nullptr) {
		$assign(humanPresentableName, $nc(this->mimeType)->getParameter("humanPresentableName"_s));
		if (humanPresentableName == nullptr) {
			$var($String, var$0, $$str({$($nc(this->mimeType)->getPrimaryType()), "/"_s}));
			$assign(humanPresentableName, $concat(var$0, $($nc(this->mimeType)->getSubType())));
		}
	}
	$set(this, humanPresentableName, humanPresentableName);
	$nc(this->mimeType)->removeParameter("humanPresentableName"_s);
}

$String* DataFlavor::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, string, $of(this)->getClass()->getName());
	$plusAssign(string, $$str({"["_s, $(paramString()), "]"_s}));
	return string;
}

$String* DataFlavor::paramString() {
	$useLocalCurrentObjectStackCache();
	$var($String, params, ""_s);
	$plusAssign(params, "mimetype="_s);
	if (this->mimeType == nullptr) {
		$plusAssign(params, "null"_s);
	} else {
		$plusAssign(params, $($nc(this->mimeType)->getBaseType()));
	}
	$plusAssign(params, ";representationclass="_s);
	if (this->representationClass == nullptr) {
		$plusAssign(params, "null"_s);
	} else {
		$plusAssign(params, $($nc(this->representationClass)->getName()));
	}
	bool var$0 = $DataFlavorUtil::isFlavorCharsetTextType(this);
	if (var$0) {
		bool var$2 = isRepresentationClassInputStream();
		bool var$1 = var$2 || isRepresentationClassByteBuffer();
		$load($bytes);
		var$0 = (var$1 || $of($getClass($bytes))->equals(this->representationClass));
	}
	if (var$0) {
		$plusAssign(params, $$str({";charset="_s, $($DataFlavorUtil::getTextCharset(this))}));
	}
	return params;
}

DataFlavor* DataFlavor::getTextPlainUnicodeFlavor() {
	$init(DataFlavor);
	$useLocalCurrentObjectStackCache();
	return $new(DataFlavor, $$str({"text/plain;charset="_s, $($nc($($DataFlavorUtil::getDesktopService()))->getDefaultUnicodeEncoding()), ";class=java.io.InputStream"_s}), "Plain Text"_s);
}

DataFlavor* DataFlavor::selectBestTextFlavor($DataFlavorArray* availableFlavors) {
	$init(DataFlavor);
	$useLocalCurrentObjectStackCache();
	if (availableFlavors == nullptr || $nc(availableFlavors)->length == 0) {
		return nullptr;
	}
	$var($Collection, var$0, static_cast<$Collection*>($Arrays::asList(availableFlavors)));
	$var(DataFlavor, bestFlavor, $cast(DataFlavor, $Collections::max(var$0, $($DataFlavorUtil::getTextFlavorComparator()))));
	if (!$nc(bestFlavor)->isFlavorTextType()) {
		return nullptr;
	}
	return bestFlavor;
}

$Reader* DataFlavor::getReaderForText($Transferable* transferable) {
	$useLocalCurrentObjectStackCache();
	$var($Object, transferObject, $nc(transferable)->getTransferData(this));
	if (transferObject == nullptr) {
		$throwNew($IllegalArgumentException, "getTransferData() returned null"_s);
	}
	if ($instanceOf($Reader, transferObject)) {
		return $cast($Reader, transferObject);
	} else if ($instanceOf($String, transferObject)) {
		return $new($StringReader, $cast($String, transferObject));
	} else if ($instanceOf($CharBuffer, transferObject)) {
		$var($CharBuffer, buffer, $cast($CharBuffer, transferObject));
		int32_t size = $nc(buffer)->remaining();
		$var($chars, chars, $new($chars, size));
		buffer->get(chars, 0, size);
		return $new($CharArrayReader, chars);
	} else if ($instanceOf($chars, transferObject)) {
		return $new($CharArrayReader, $cast($chars, transferObject));
	}
	$var($InputStream, stream, nullptr);
	if ($instanceOf($InputStream, transferObject)) {
		$assign(stream, $cast($InputStream, transferObject));
	} else if ($instanceOf($ByteBuffer, transferObject)) {
		$var($ByteBuffer, buffer, $cast($ByteBuffer, transferObject));
		int32_t size = $nc(buffer)->remaining();
		$var($bytes, bytes, $new($bytes, size));
		buffer->get(bytes, 0, size);
		$assign(stream, $new($ByteArrayInputStream, bytes));
	} else if ($instanceOf($bytes, transferObject)) {
		$assign(stream, $new($ByteArrayInputStream, $cast($bytes, transferObject)));
	}
	if (stream == nullptr) {
		$throwNew($IllegalArgumentException, "transfer data is not Reader, String, CharBuffer, char array, InputStream, ByteBuffer, or byte array"_s);
	}
	$var($String, encoding, getParameter("charset"_s));
	return (encoding == nullptr) ? static_cast<$Reader*>($new($InputStreamReader, stream)) : static_cast<$Reader*>($new($InputStreamReader, stream, encoding));
}

$String* DataFlavor::getMimeType() {
	return (this->mimeType != nullptr) ? $nc(this->mimeType)->toString() : ($String*)nullptr;
}

$Class* DataFlavor::getRepresentationClass() {
	return this->representationClass;
}

$String* DataFlavor::getHumanPresentableName() {
	return this->humanPresentableName;
}

$String* DataFlavor::getPrimaryType() {
	return (this->mimeType != nullptr) ? $nc(this->mimeType)->getPrimaryType() : ($String*)nullptr;
}

$String* DataFlavor::getSubType() {
	return (this->mimeType != nullptr) ? $nc(this->mimeType)->getSubType() : ($String*)nullptr;
}

$String* DataFlavor::getParameter($String* paramName) {
	if ($nc(paramName)->equals("humanPresentableName"_s)) {
		return this->humanPresentableName;
	} else {
		return (this->mimeType != nullptr) ? $nc(this->mimeType)->getParameter(paramName) : ($String*)nullptr;
	}
}

void DataFlavor::setHumanPresentableName($String* humanPresentableName) {
	$set(this, humanPresentableName, humanPresentableName);
}

bool DataFlavor::equals(Object$* o) {
	return (($instanceOf(DataFlavor, o)) && equals($cast(DataFlavor, o)));
}

bool DataFlavor::equals(DataFlavor* that) {
	$useLocalCurrentObjectStackCache();
	if (that == nullptr) {
		return false;
	}
	if (this == that) {
		return true;
	}
	$var($Object, var$0, $of(this->getRepresentationClass()));
	if (!$Objects::equals(var$0, $nc(that)->getRepresentationClass())) {
		return false;
	}
	if (this->mimeType == nullptr) {
		if ($nc(that)->mimeType != nullptr) {
			return false;
		}
	} else {
		if (!$nc(this->mimeType)->match($nc(that)->mimeType)) {
			return false;
		}
		if ("text"_s->equals($(getPrimaryType()))) {
			bool var$1 = $DataFlavorUtil::doesSubtypeSupportCharset(this) && this->representationClass != nullptr;
			if (var$1 && !isStandardTextRepresentationClass()) {
				$var($String, thisCharset, $DataFlavorUtil::canonicalName($(this->getParameter("charset"_s))));
				$var($String, thatCharset, $DataFlavorUtil::canonicalName($($nc(that)->getParameter("charset"_s))));
				if (!$Objects::equals(thisCharset, thatCharset)) {
					return false;
				}
			}
			if ("html"_s->equals($(getSubType()))) {
				$var($String, thisDocument, this->getParameter("document"_s));
				$var($String, thatDocument, $nc(that)->getParameter("document"_s));
				if (!$Objects::equals(thisDocument, thatDocument)) {
					return false;
				}
			}
		}
	}
	return true;
}

bool DataFlavor::equals($String* s) {
	if (s == nullptr || this->mimeType == nullptr) {
		return false;
	}
	return isMimeTypeEqual(s);
}

int32_t DataFlavor::hashCode() {
	$useLocalCurrentObjectStackCache();
	int32_t total = 0;
	if (this->representationClass != nullptr) {
		total += $nc($of(this->representationClass))->hashCode();
	}
	if (this->mimeType != nullptr) {
		$var($String, primaryType, $nc(this->mimeType)->getPrimaryType());
		if (primaryType != nullptr) {
			total += primaryType->hashCode();
		}
		if ("text"_s->equals(primaryType)) {
			bool var$0 = $DataFlavorUtil::doesSubtypeSupportCharset(this) && this->representationClass != nullptr;
			if (var$0 && !isStandardTextRepresentationClass()) {
				$var($String, charset, $DataFlavorUtil::canonicalName($(getParameter("charset"_s))));
				if (charset != nullptr) {
					total += charset->hashCode();
				}
			}
			if ("html"_s->equals($(getSubType()))) {
				$var($String, document, this->getParameter("document"_s));
				if (document != nullptr) {
					total += document->hashCode();
				}
			}
		}
	}
	return total;
}

bool DataFlavor::match(DataFlavor* that) {
	return equals(that);
}

bool DataFlavor::isMimeTypeEqual($String* mimeType) {
	if (mimeType == nullptr) {
		$throwNew($NullPointerException, "mimeType"_s);
	}
	if (this->mimeType == nullptr) {
		return false;
	}
	try {
		return $nc(this->mimeType)->match($$new($MimeType, mimeType));
	} catch ($MimeTypeParseException& mtpe) {
		return false;
	}
	$shouldNotReachHere();
}

bool DataFlavor::isMimeTypeEqual(DataFlavor* dataFlavor) {
	return isMimeTypeEqual($nc(dataFlavor)->mimeType);
}

bool DataFlavor::isMimeTypeEqual($MimeType* mtype) {
	if (this->mimeType == nullptr) {
		return (mtype == nullptr);
	}
	return $nc(this->mimeType)->match(mtype);
}

bool DataFlavor::isStandardTextRepresentationClass() {
	bool var$2 = isRepresentationClassReader();
	bool var$1 = var$2 || $of($String::class$)->equals(this->representationClass);
	bool var$0 = var$1 || isRepresentationClassCharBuffer();
	$load($chars);
	return var$0 || $of($getClass($chars))->equals(this->representationClass);
}

bool DataFlavor::isMimeTypeSerializedObject() {
	return isMimeTypeEqual(DataFlavor::javaSerializedObjectMimeType);
}

$Class* DataFlavor::getDefaultRepresentationClass() {
	$load($InputStream);
	return $InputStream::class$;
}

$String* DataFlavor::getDefaultRepresentationClassAsString() {
	return $nc(getDefaultRepresentationClass())->getName();
}

bool DataFlavor::isRepresentationClassInputStream() {
	$load($InputStream);
	return $InputStream::class$->isAssignableFrom(this->representationClass);
}

bool DataFlavor::isRepresentationClassReader() {
	$load($Reader);
	return $Reader::class$->isAssignableFrom(this->representationClass);
}

bool DataFlavor::isRepresentationClassCharBuffer() {
	$load($CharBuffer);
	return $CharBuffer::class$->isAssignableFrom(this->representationClass);
}

bool DataFlavor::isRepresentationClassByteBuffer() {
	$load($ByteBuffer);
	return $ByteBuffer::class$->isAssignableFrom(this->representationClass);
}

bool DataFlavor::isRepresentationClassSerializable() {
	$load($Serializable);
	return $Serializable::class$->isAssignableFrom(this->representationClass);
}

bool DataFlavor::isRepresentationClassRemote() {
	return $DataFlavorUtil$RMI::isRemote(this->representationClass);
}

bool DataFlavor::isFlavorSerializedObjectType() {
	bool var$0 = isRepresentationClassSerializable();
	return var$0 && isMimeTypeEqual(DataFlavor::javaSerializedObjectMimeType);
}

bool DataFlavor::isFlavorRemoteObjectType() {
	bool var$1 = isRepresentationClassRemote();
	bool var$0 = var$1 && isRepresentationClassSerializable();
	return var$0 && isMimeTypeEqual(DataFlavor::javaRemoteObjectMimeType);
}

bool DataFlavor::isFlavorJavaFileListType() {
	if (this->mimeType == nullptr || this->representationClass == nullptr) {
		return false;
	}
	$load($List);
	bool var$0 = $List::class$->isAssignableFrom(this->representationClass);
	return var$0 && $nc(this->mimeType)->match($nc(DataFlavor::javaFileListFlavor)->mimeType);
}

bool DataFlavor::isFlavorTextType() {
	bool var$0 = $DataFlavorUtil::isFlavorCharsetTextType(this);
	return (var$0 || $DataFlavorUtil::isFlavorNoncharsetTextType(this));
}

void DataFlavor::writeExternal($ObjectOutput* os) {
	$synchronized(this) {
		if (this->mimeType != nullptr) {
			$nc(this->mimeType)->setParameter("humanPresentableName"_s, this->humanPresentableName);
			$nc(os)->writeObject(this->mimeType);
			$nc(this->mimeType)->removeParameter("humanPresentableName"_s);
		} else {
			$nc(os)->writeObject(nullptr);
		}
		$nc(os)->writeObject(this->representationClass);
	}
}

void DataFlavor::readExternal($ObjectInput* is) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$beforeCallerSensitive();
		$var($String, rcn, nullptr);
		$set(this, mimeType, $cast($MimeType, $nc(is)->readObject()));
		if (this->mimeType != nullptr) {
			$set(this, humanPresentableName, $nc(this->mimeType)->getParameter("humanPresentableName"_s));
			$nc(this->mimeType)->removeParameter("humanPresentableName"_s);
			$assign(rcn, $nc(this->mimeType)->getParameter("class"_s));
			if (rcn == nullptr) {
				$throwNew($IOException, $$str({"no class parameter specified in: "_s, this->mimeType}));
			}
		}
		try {
			$set(this, representationClass, $cast($Class, is->readObject()));
		} catch ($OptionalDataException& ode) {
			if (!ode->eof || ode->length != 0) {
				$throw(ode);
			}
			if (rcn != nullptr) {
				$set(this, representationClass, DataFlavor::tryToLoadClass(rcn, $($of(this)->getClass()->getClassLoader())));
			}
		}
	}
}

$Object* DataFlavor::clone() {
	$var($Object, newObj, $Externalizable::clone());
	if (this->mimeType != nullptr) {
		$set($nc($cast(DataFlavor, newObj)), mimeType, $cast($MimeType, $nc(this->mimeType)->clone()));
	}
	return $of(newObj);
}

$String* DataFlavor::normalizeMimeTypeParameter($String* parameterName, $String* parameterValue) {
	return parameterValue;
}

$String* DataFlavor::normalizeMimeType($String* mimeType) {
	return mimeType;
}

void clinit$DataFlavor($Class* class$) {
	$assignStatic(DataFlavor::javaSerializedObjectMimeType, "application/x-java-serialized-object"_s);
	$assignStatic(DataFlavor::javaJVMLocalObjectMimeType, "application/x-java-jvm-local-objectref"_s);
	$assignStatic(DataFlavor::javaRemoteObjectMimeType, "application/x-java-remote-object"_s);
	$assignStatic(DataFlavor::stringFlavor, DataFlavor::createConstant($String::class$, "Unicode String"_s));
	$assignStatic(DataFlavor::imageFlavor, DataFlavor::createConstant("image/x-java-image; class=java.awt.Image"_s, "Image"_s));
	$assignStatic(DataFlavor::plainTextFlavor, DataFlavor::createConstant("text/plain; charset=unicode; class=java.io.InputStream"_s, "Plain Text"_s));
	$assignStatic(DataFlavor::javaFileListFlavor, DataFlavor::createConstant("application/x-java-file-list;class=java.util.List"_s, ($String*)nullptr));
	$assignStatic(DataFlavor::selectionHtmlFlavor, DataFlavor::initHtml("selection"_s));
	$assignStatic(DataFlavor::fragmentHtmlFlavor, DataFlavor::initHtml("fragment"_s));
	$assignStatic(DataFlavor::allHtmlFlavor, DataFlavor::initHtml("all"_s));
}

DataFlavor::DataFlavor() {
}

$Class* DataFlavor::load$($String* name, bool initialize) {
	$loadClass(DataFlavor, name, initialize, &_DataFlavor_ClassInfo_, clinit$DataFlavor, allocate$DataFlavor);
	return class$;
}

$Class* DataFlavor::class$ = nullptr;

		} // datatransfer
	} // awt
} // java