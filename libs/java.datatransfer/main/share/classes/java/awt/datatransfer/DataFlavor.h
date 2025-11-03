#ifndef _java_awt_datatransfer_DataFlavor_h_
#define _java_awt_datatransfer_DataFlavor_h_
//$ class java.awt.datatransfer.DataFlavor
//$ extends java.io.Externalizable
//$ implements java.lang.Cloneable

#include <java/io/Externalizable.h>
#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>

namespace java {
	namespace awt {
		namespace datatransfer {
			class MimeType;
			class MimeTypeParameterList;
			class Transferable;
		}
	}
}
namespace java {
	namespace io {
		class ObjectInput;
		class ObjectOutput;
		class Reader;
	}
}
namespace java {
	namespace lang {
		class ClassLoader;
	}
}

namespace java {
	namespace awt {
		namespace datatransfer {

class $export DataFlavor : public ::java::io::Externalizable, public ::java::lang::Cloneable {
	$class(DataFlavor, 0, ::java::io::Externalizable, ::java::lang::Cloneable)
public:
	DataFlavor();
	virtual void finalize() override;
	void init$();
	void init$($String* primaryType, $String* subType, ::java::awt::datatransfer::MimeTypeParameterList* params, $Class* representationClass, $String* humanPresentableName);
	void init$($Class* representationClass, $String* humanPresentableName);
	void init$($String* mimeType, $String* humanPresentableName);
	void init$($String* mimeType, $String* humanPresentableName, ::java::lang::ClassLoader* classLoader);
	void init$($String* mimeType);
	virtual $Object* clone() override;
	static ::java::awt::datatransfer::DataFlavor* createConstant($Class* rc, $String* prn);
	static ::java::awt::datatransfer::DataFlavor* createConstant($String* mt, $String* prn);
	virtual bool equals(Object$* o) override;
	virtual bool equals(::java::awt::datatransfer::DataFlavor* that);
	virtual bool equals($String* s);
	$Class* getDefaultRepresentationClass();
	$String* getDefaultRepresentationClassAsString();
	virtual $String* getHumanPresentableName();
	virtual $String* getMimeType();
	virtual $String* getParameter($String* paramName);
	virtual $String* getPrimaryType();
	virtual ::java::io::Reader* getReaderForText(::java::awt::datatransfer::Transferable* transferable);
	virtual $Class* getRepresentationClass();
	virtual $String* getSubType();
	static ::java::awt::datatransfer::DataFlavor* getTextPlainUnicodeFlavor();
	virtual int32_t hashCode() override;
	static ::java::awt::datatransfer::DataFlavor* initHtml($String* htmlFlavorType);
	void initialize($String* mimeType, $String* humanPresentableName, ::java::lang::ClassLoader* classLoader);
	virtual bool isFlavorJavaFileListType();
	virtual bool isFlavorRemoteObjectType();
	virtual bool isFlavorSerializedObjectType();
	virtual bool isFlavorTextType();
	virtual bool isMimeTypeEqual($String* mimeType);
	bool isMimeTypeEqual(::java::awt::datatransfer::DataFlavor* dataFlavor);
	bool isMimeTypeEqual(::java::awt::datatransfer::MimeType* mtype);
	virtual bool isMimeTypeSerializedObject();
	virtual bool isRepresentationClassByteBuffer();
	virtual bool isRepresentationClassCharBuffer();
	virtual bool isRepresentationClassInputStream();
	virtual bool isRepresentationClassReader();
	virtual bool isRepresentationClassRemote();
	virtual bool isRepresentationClassSerializable();
	bool isStandardTextRepresentationClass();
	virtual bool match(::java::awt::datatransfer::DataFlavor* that);
	virtual $String* normalizeMimeType($String* mimeType);
	virtual $String* normalizeMimeTypeParameter($String* parameterName, $String* parameterValue);
	$String* paramString();
	virtual void readExternal(::java::io::ObjectInput* is) override;
	static ::java::awt::datatransfer::DataFlavor* selectBestTextFlavor($Array<::java::awt::datatransfer::DataFlavor>* availableFlavors);
	virtual void setHumanPresentableName($String* humanPresentableName);
	virtual $String* toString() override;
	static $Class* tryToLoadClass($String* className, ::java::lang::ClassLoader* fallback);
	virtual void writeExternal(::java::io::ObjectOutput* os) override;
	static const int64_t serialVersionUID = (int64_t)0x741DA5DB78A37333;
	static ::java::awt::datatransfer::DataFlavor* stringFlavor;
	static ::java::awt::datatransfer::DataFlavor* imageFlavor;
	static ::java::awt::datatransfer::DataFlavor* plainTextFlavor;
	static $String* javaSerializedObjectMimeType;
	static ::java::awt::datatransfer::DataFlavor* javaFileListFlavor;
	static $String* javaJVMLocalObjectMimeType;
	static $String* javaRemoteObjectMimeType;
	static ::java::awt::datatransfer::DataFlavor* selectionHtmlFlavor;
	static ::java::awt::datatransfer::DataFlavor* fragmentHtmlFlavor;
	static ::java::awt::datatransfer::DataFlavor* allHtmlFlavor;
	int32_t atom = 0;
	::java::awt::datatransfer::MimeType* mimeType = nullptr;
	$String* humanPresentableName = nullptr;
	$Class* representationClass = nullptr;
};

		} // datatransfer
	} // awt
} // java

#endif // _java_awt_datatransfer_DataFlavor_h_