#include <com/sun/imageio/plugins/jpeg/COMMarkerSegment.h>
#include <com/sun/imageio/plugins/jpeg/JPEG.h>
#include <com/sun/imageio/plugins/jpeg/JPEGBuffer.h>
#include <com/sun/imageio/plugins/jpeg/MarkerSegment.h>
#include <java/io/UnsupportedEncodingException.h>
#include <javax/imageio/metadata/IIOInvalidTreeException.h>
#include <javax/imageio/metadata/IIOMetadataNode.h>
#include <javax/imageio/stream/ImageOutputStream.h>
#include <org/w3c/dom/NamedNodeMap.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef COM
#undef ENCODING

using $JPEG = ::com::sun::imageio::plugins::jpeg::JPEG;
using $JPEGBuffer = ::com::sun::imageio::plugins::jpeg::JPEGBuffer;
using $MarkerSegment = ::com::sun::imageio::plugins::jpeg::MarkerSegment;
using $UnsupportedEncodingException = ::java::io::UnsupportedEncodingException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $IIOInvalidTreeException = ::javax::imageio::metadata::IIOInvalidTreeException;
using $IIOMetadataNode = ::javax::imageio::metadata::IIOMetadataNode;
using $ImageOutputStream = ::javax::imageio::stream::ImageOutputStream;
using $Node = ::org::w3c::dom::Node;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace jpeg {

$String* COMMarkerSegment::ENCODING = nullptr;

void COMMarkerSegment::init$($JPEGBuffer* buffer) {
	$MarkerSegment::init$(buffer);
	loadData(buffer);
}

void COMMarkerSegment::init$($String* comment) {
	$MarkerSegment::init$($JPEG::COM);
	$set(this, data, $nc(comment)->getBytes());
}

void COMMarkerSegment::init$($Node* node) {
	$useLocalObjectStack();
	$MarkerSegment::init$($JPEG::COM);
	if ($instanceOf($IIOMetadataNode, node)) {
		$var($IIOMetadataNode, ourNode, $cast($IIOMetadataNode, node));
		$set(this, data, $cast($bytes, ourNode->getUserObject()));
	}
	if (this->data == nullptr) {
		$var($String, comment, $$nc($$nc($nc(node)->getAttributes())->getNamedItem("comment"_s))->getNodeValue());
		if (comment != nullptr) {
			$set(this, data, comment->getBytes());
		} else {
			$throwNew($IIOInvalidTreeException, "Empty comment node!"_s, node);
		}
	}
}

$String* COMMarkerSegment::getComment() {
	try {
		return $new($String, this->data, COMMarkerSegment::ENCODING);
	} catch ($UnsupportedEncodingException& e) {
	}
	return nullptr;
}

$IIOMetadataNode* COMMarkerSegment::getNativeNode() {
	$useLocalObjectStack();
	$var($IIOMetadataNode, node, $new($IIOMetadataNode, "com"_s));
	node->setAttribute("comment"_s, $(getComment()));
	if (this->data != nullptr) {
		node->setUserObject($(this->data->clone()));
	}
	return node;
}

void COMMarkerSegment::write($ImageOutputStream* ios) {
	this->length = 2 + $nc(this->data)->length;
	writeTag(ios);
	$nc(ios)->write(this->data);
}

void COMMarkerSegment::print() {
	$useLocalObjectStack();
	printTag("COM"_s);
	$nc($System::out)->println($$str({"<"_s, $(getComment()), ">"_s}));
}

COMMarkerSegment::COMMarkerSegment() {
}

void COMMarkerSegment::clinit$($Class* clazz) {
	$assignStatic(COMMarkerSegment::ENCODING, "ISO-8859-1"_s);
}

$Class* COMMarkerSegment::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"ENCODING", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(COMMarkerSegment, ENCODING)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/imageio/plugins/jpeg/JPEGBuffer;)V", nullptr, 0, $method(COMMarkerSegment, init$, void, $JPEGBuffer*), "java.io.IOException"},
		{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(COMMarkerSegment, init$, void, $String*)},
		{"<init>", "(Lorg/w3c/dom/Node;)V", nullptr, 0, $method(COMMarkerSegment, init$, void, $Node*), "javax.imageio.metadata.IIOInvalidTreeException"},
		{"getComment", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(COMMarkerSegment, getComment, $String*)},
		{"getNativeNode", "()Ljavax/imageio/metadata/IIOMetadataNode;", nullptr, 0, $virtualMethod(COMMarkerSegment, getNativeNode, $IIOMetadataNode*)},
		{"print", "()V", nullptr, 0, $virtualMethod(COMMarkerSegment, print, void)},
		{"write", "(Ljavax/imageio/stream/ImageOutputStream;)V", nullptr, 0, $virtualMethod(COMMarkerSegment, write, void, $ImageOutputStream*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.imageio.plugins.jpeg.COMMarkerSegment",
		"com.sun.imageio.plugins.jpeg.MarkerSegment",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(COMMarkerSegment, name, initialize, &classInfo$$, COMMarkerSegment::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(COMMarkerSegment);
	});
	return class$;
}

$Class* COMMarkerSegment::class$ = nullptr;

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com