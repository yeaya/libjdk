#include <com/sun/tools/javac/tree/DocPretty.h>

#include <com/sun/source/doctree/AttributeTree$ValueKind.h>
#include <com/sun/source/doctree/AttributeTree.h>
#include <com/sun/source/doctree/AuthorTree.h>
#include <com/sun/source/doctree/BlockTagTree.h>
#include <com/sun/source/doctree/CommentTree.h>
#include <com/sun/source/doctree/DeprecatedTree.h>
#include <com/sun/source/doctree/DocCommentTree.h>
#include <com/sun/source/doctree/DocRootTree.h>
#include <com/sun/source/doctree/DocTree$Kind.h>
#include <com/sun/source/doctree/DocTree.h>
#include <com/sun/source/doctree/DocTreeVisitor.h>
#include <com/sun/source/doctree/DocTypeTree.h>
#include <com/sun/source/doctree/EndElementTree.h>
#include <com/sun/source/doctree/EntityTree.h>
#include <com/sun/source/doctree/ErroneousTree.h>
#include <com/sun/source/doctree/HiddenTree.h>
#include <com/sun/source/doctree/IdentifierTree.h>
#include <com/sun/source/doctree/IndexTree.h>
#include <com/sun/source/doctree/InheritDocTree.h>
#include <com/sun/source/doctree/InlineTagTree.h>
#include <com/sun/source/doctree/LinkTree.h>
#include <com/sun/source/doctree/LiteralTree.h>
#include <com/sun/source/doctree/ParamTree.h>
#include <com/sun/source/doctree/ProvidesTree.h>
#include <com/sun/source/doctree/ReferenceTree.h>
#include <com/sun/source/doctree/ReturnTree.h>
#include <com/sun/source/doctree/SeeTree.h>
#include <com/sun/source/doctree/SerialDataTree.h>
#include <com/sun/source/doctree/SerialFieldTree.h>
#include <com/sun/source/doctree/SerialTree.h>
#include <com/sun/source/doctree/SinceTree.h>
#include <com/sun/source/doctree/StartElementTree.h>
#include <com/sun/source/doctree/SummaryTree.h>
#include <com/sun/source/doctree/SystemPropertyTree.h>
#include <com/sun/source/doctree/TextTree.h>
#include <com/sun/source/doctree/ThrowsTree.h>
#include <com/sun/source/doctree/UnknownBlockTagTree.h>
#include <com/sun/source/doctree/UnknownInlineTagTree.h>
#include <com/sun/source/doctree/UsesTree.h>
#include <com/sun/source/doctree/ValueTree.h>
#include <com/sun/source/doctree/VersionTree.h>
#include <com/sun/tools/javac/tree/DocPretty$1.h>
#include <com/sun/tools/javac/tree/DocPretty$UncheckedIOException.h>
#include <com/sun/tools/javac/util/Convert.h>
#include <java/io/IOException.h>
#include <java/io/Writer.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Error.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <javax/lang/model/element/Name.h>
#include <jcpp.h>

#undef UNQUOTED

using $AttributeTree = ::com::sun::source::doctree::AttributeTree;
using $AttributeTree$ValueKind = ::com::sun::source::doctree::AttributeTree$ValueKind;
using $AuthorTree = ::com::sun::source::doctree::AuthorTree;
using $BlockTagTree = ::com::sun::source::doctree::BlockTagTree;
using $CommentTree = ::com::sun::source::doctree::CommentTree;
using $DeprecatedTree = ::com::sun::source::doctree::DeprecatedTree;
using $DocCommentTree = ::com::sun::source::doctree::DocCommentTree;
using $DocRootTree = ::com::sun::source::doctree::DocRootTree;
using $DocTree = ::com::sun::source::doctree::DocTree;
using $DocTreeVisitor = ::com::sun::source::doctree::DocTreeVisitor;
using $DocTypeTree = ::com::sun::source::doctree::DocTypeTree;
using $EndElementTree = ::com::sun::source::doctree::EndElementTree;
using $EntityTree = ::com::sun::source::doctree::EntityTree;
using $ErroneousTree = ::com::sun::source::doctree::ErroneousTree;
using $HiddenTree = ::com::sun::source::doctree::HiddenTree;
using $IdentifierTree = ::com::sun::source::doctree::IdentifierTree;
using $IndexTree = ::com::sun::source::doctree::IndexTree;
using $InheritDocTree = ::com::sun::source::doctree::InheritDocTree;
using $InlineTagTree = ::com::sun::source::doctree::InlineTagTree;
using $LinkTree = ::com::sun::source::doctree::LinkTree;
using $LiteralTree = ::com::sun::source::doctree::LiteralTree;
using $ParamTree = ::com::sun::source::doctree::ParamTree;
using $ProvidesTree = ::com::sun::source::doctree::ProvidesTree;
using $ReferenceTree = ::com::sun::source::doctree::ReferenceTree;
using $ReturnTree = ::com::sun::source::doctree::ReturnTree;
using $SeeTree = ::com::sun::source::doctree::SeeTree;
using $SerialDataTree = ::com::sun::source::doctree::SerialDataTree;
using $SerialFieldTree = ::com::sun::source::doctree::SerialFieldTree;
using $SerialTree = ::com::sun::source::doctree::SerialTree;
using $SinceTree = ::com::sun::source::doctree::SinceTree;
using $StartElementTree = ::com::sun::source::doctree::StartElementTree;
using $SummaryTree = ::com::sun::source::doctree::SummaryTree;
using $SystemPropertyTree = ::com::sun::source::doctree::SystemPropertyTree;
using $TextTree = ::com::sun::source::doctree::TextTree;
using $ThrowsTree = ::com::sun::source::doctree::ThrowsTree;
using $UnknownBlockTagTree = ::com::sun::source::doctree::UnknownBlockTagTree;
using $UnknownInlineTagTree = ::com::sun::source::doctree::UnknownInlineTagTree;
using $UsesTree = ::com::sun::source::doctree::UsesTree;
using $ValueTree = ::com::sun::source::doctree::ValueTree;
using $VersionTree = ::com::sun::source::doctree::VersionTree;
using $DocPretty$1 = ::com::sun::tools::javac::tree::DocPretty$1;
using $DocPretty$UncheckedIOException = ::com::sun::tools::javac::tree::DocPretty$UncheckedIOException;
using $Convert = ::com::sun::tools::javac::util::Convert;
using $IOException = ::java::io::IOException;
using $Writer = ::java::io::Writer;
using $AssertionError = ::java::lang::AssertionError;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

$FieldInfo _DocPretty_FieldInfo_[] = {
	{"out", "Ljava/io/Writer;", nullptr, $FINAL, $field(DocPretty, out)},
	{"lineSep", "Ljava/lang/String;", nullptr, $FINAL, $field(DocPretty, lineSep)},
	{}
};

$MethodInfo _DocPretty_MethodInfo_[] = {
	{"<init>", "(Ljava/io/Writer;)V", nullptr, $PUBLIC, $method(DocPretty, init$, void, $Writer*)},
	{"print", "(Lcom/sun/source/doctree/DocTree;)V", nullptr, $PUBLIC, $virtualMethod(DocPretty, print, void, $DocTree*), "java.io.IOException"},
	{"print", "(Ljava/lang/Object;)V", nullptr, $PROTECTED, $virtualMethod(DocPretty, print, void, Object$*), "java.io.IOException"},
	{"print", "(Ljava/util/List;)V", "(Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;)V", $PUBLIC, $virtualMethod(DocPretty, print, void, $List*), "java.io.IOException"},
	{"print", "(Ljava/util/List;Ljava/lang/String;)V", "(Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;Ljava/lang/String;)V", $PROTECTED, $virtualMethod(DocPretty, print, void, $List*, $String*), "java.io.IOException"},
	{"printTagName", "(Lcom/sun/source/doctree/DocTree;)V", nullptr, $PROTECTED, $virtualMethod(DocPretty, printTagName, void, $DocTree*), "java.io.IOException"},
	{"println", "()V", nullptr, $PROTECTED, $virtualMethod(DocPretty, println, void), "java.io.IOException"},
	{"visitAttribute", "(Lcom/sun/source/doctree/AttributeTree;Ljava/lang/Void;)Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(DocPretty, visitAttribute, $Void*, $AttributeTree*, $Void*)},
	{"visitAttribute", "(Lcom/sun/source/doctree/AttributeTree;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(DocPretty, visitAttribute, $Object*, $AttributeTree*, Object$*)},
	{"visitAuthor", "(Lcom/sun/source/doctree/AuthorTree;Ljava/lang/Void;)Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(DocPretty, visitAuthor, $Void*, $AuthorTree*, $Void*)},
	{"visitAuthor", "(Lcom/sun/source/doctree/AuthorTree;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(DocPretty, visitAuthor, $Object*, $AuthorTree*, Object$*)},
	{"visitComment", "(Lcom/sun/source/doctree/CommentTree;Ljava/lang/Void;)Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(DocPretty, visitComment, $Void*, $CommentTree*, $Void*)},
	{"visitComment", "(Lcom/sun/source/doctree/CommentTree;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(DocPretty, visitComment, $Object*, $CommentTree*, Object$*)},
	{"visitDeprecated", "(Lcom/sun/source/doctree/DeprecatedTree;Ljava/lang/Void;)Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(DocPretty, visitDeprecated, $Void*, $DeprecatedTree*, $Void*)},
	{"visitDeprecated", "(Lcom/sun/source/doctree/DeprecatedTree;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(DocPretty, visitDeprecated, $Object*, $DeprecatedTree*, Object$*)},
	{"visitDocComment", "(Lcom/sun/source/doctree/DocCommentTree;Ljava/lang/Void;)Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(DocPretty, visitDocComment, $Void*, $DocCommentTree*, $Void*)},
	{"visitDocComment", "(Lcom/sun/source/doctree/DocCommentTree;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(DocPretty, visitDocComment, $Object*, $DocCommentTree*, Object$*)},
	{"visitDocRoot", "(Lcom/sun/source/doctree/DocRootTree;Ljava/lang/Void;)Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(DocPretty, visitDocRoot, $Void*, $DocRootTree*, $Void*)},
	{"visitDocRoot", "(Lcom/sun/source/doctree/DocRootTree;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(DocPretty, visitDocRoot, $Object*, $DocRootTree*, Object$*)},
	{"visitDocType", "(Lcom/sun/source/doctree/DocTypeTree;Ljava/lang/Void;)Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(DocPretty, visitDocType, $Void*, $DocTypeTree*, $Void*)},
	{"visitDocType", "(Lcom/sun/source/doctree/DocTypeTree;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(DocPretty, visitDocType, $Object*, $DocTypeTree*, Object$*)},
	{"visitEndElement", "(Lcom/sun/source/doctree/EndElementTree;Ljava/lang/Void;)Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(DocPretty, visitEndElement, $Void*, $EndElementTree*, $Void*)},
	{"visitEndElement", "(Lcom/sun/source/doctree/EndElementTree;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(DocPretty, visitEndElement, $Object*, $EndElementTree*, Object$*)},
	{"visitEntity", "(Lcom/sun/source/doctree/EntityTree;Ljava/lang/Void;)Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(DocPretty, visitEntity, $Void*, $EntityTree*, $Void*)},
	{"visitEntity", "(Lcom/sun/source/doctree/EntityTree;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(DocPretty, visitEntity, $Object*, $EntityTree*, Object$*)},
	{"visitErroneous", "(Lcom/sun/source/doctree/ErroneousTree;Ljava/lang/Void;)Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(DocPretty, visitErroneous, $Void*, $ErroneousTree*, $Void*)},
	{"visitErroneous", "(Lcom/sun/source/doctree/ErroneousTree;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(DocPretty, visitErroneous, $Object*, $ErroneousTree*, Object$*)},
	{"visitHidden", "(Lcom/sun/source/doctree/HiddenTree;Ljava/lang/Void;)Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(DocPretty, visitHidden, $Void*, $HiddenTree*, $Void*)},
	{"visitHidden", "(Lcom/sun/source/doctree/HiddenTree;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(DocPretty, visitHidden, $Object*, $HiddenTree*, Object$*)},
	{"visitIdentifier", "(Lcom/sun/source/doctree/IdentifierTree;Ljava/lang/Void;)Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(DocPretty, visitIdentifier, $Void*, $IdentifierTree*, $Void*)},
	{"visitIdentifier", "(Lcom/sun/source/doctree/IdentifierTree;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(DocPretty, visitIdentifier, $Object*, $IdentifierTree*, Object$*)},
	{"visitIndex", "(Lcom/sun/source/doctree/IndexTree;Ljava/lang/Void;)Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(DocPretty, visitIndex, $Void*, $IndexTree*, $Void*)},
	{"visitIndex", "(Lcom/sun/source/doctree/IndexTree;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(DocPretty, visitIndex, $Object*, $IndexTree*, Object$*)},
	{"visitInheritDoc", "(Lcom/sun/source/doctree/InheritDocTree;Ljava/lang/Void;)Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(DocPretty, visitInheritDoc, $Void*, $InheritDocTree*, $Void*)},
	{"visitInheritDoc", "(Lcom/sun/source/doctree/InheritDocTree;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(DocPretty, visitInheritDoc, $Object*, $InheritDocTree*, Object$*)},
	{"visitLink", "(Lcom/sun/source/doctree/LinkTree;Ljava/lang/Void;)Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(DocPretty, visitLink, $Void*, $LinkTree*, $Void*)},
	{"visitLink", "(Lcom/sun/source/doctree/LinkTree;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(DocPretty, visitLink, $Object*, $LinkTree*, Object$*)},
	{"visitLiteral", "(Lcom/sun/source/doctree/LiteralTree;Ljava/lang/Void;)Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(DocPretty, visitLiteral, $Void*, $LiteralTree*, $Void*)},
	{"visitLiteral", "(Lcom/sun/source/doctree/LiteralTree;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(DocPretty, visitLiteral, $Object*, $LiteralTree*, Object$*)},
	{"visitOther", "(Lcom/sun/source/doctree/DocTree;Ljava/lang/Void;)Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(DocPretty, visitOther, $Void*, $DocTree*, $Void*)},
	{"visitOther", "(Lcom/sun/source/doctree/DocTree;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(DocPretty, visitOther, $Object*, $DocTree*, Object$*)},
	{"visitParam", "(Lcom/sun/source/doctree/ParamTree;Ljava/lang/Void;)Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(DocPretty, visitParam, $Void*, $ParamTree*, $Void*)},
	{"visitParam", "(Lcom/sun/source/doctree/ParamTree;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(DocPretty, visitParam, $Object*, $ParamTree*, Object$*)},
	{"visitProvides", "(Lcom/sun/source/doctree/ProvidesTree;Ljava/lang/Void;)Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(DocPretty, visitProvides, $Void*, $ProvidesTree*, $Void*)},
	{"visitProvides", "(Lcom/sun/source/doctree/ProvidesTree;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(DocPretty, visitProvides, $Object*, $ProvidesTree*, Object$*)},
	{"visitReference", "(Lcom/sun/source/doctree/ReferenceTree;Ljava/lang/Void;)Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(DocPretty, visitReference, $Void*, $ReferenceTree*, $Void*)},
	{"visitReference", "(Lcom/sun/source/doctree/ReferenceTree;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(DocPretty, visitReference, $Object*, $ReferenceTree*, Object$*)},
	{"visitReturn", "(Lcom/sun/source/doctree/ReturnTree;Ljava/lang/Void;)Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(DocPretty, visitReturn, $Void*, $ReturnTree*, $Void*)},
	{"visitReturn", "(Lcom/sun/source/doctree/ReturnTree;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(DocPretty, visitReturn, $Object*, $ReturnTree*, Object$*)},
	{"visitSee", "(Lcom/sun/source/doctree/SeeTree;Ljava/lang/Void;)Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(DocPretty, visitSee, $Void*, $SeeTree*, $Void*)},
	{"visitSee", "(Lcom/sun/source/doctree/SeeTree;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(DocPretty, visitSee, $Object*, $SeeTree*, Object$*)},
	{"visitSerial", "(Lcom/sun/source/doctree/SerialTree;Ljava/lang/Void;)Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(DocPretty, visitSerial, $Void*, $SerialTree*, $Void*)},
	{"visitSerial", "(Lcom/sun/source/doctree/SerialTree;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(DocPretty, visitSerial, $Object*, $SerialTree*, Object$*)},
	{"visitSerialData", "(Lcom/sun/source/doctree/SerialDataTree;Ljava/lang/Void;)Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(DocPretty, visitSerialData, $Void*, $SerialDataTree*, $Void*)},
	{"visitSerialData", "(Lcom/sun/source/doctree/SerialDataTree;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(DocPretty, visitSerialData, $Object*, $SerialDataTree*, Object$*)},
	{"visitSerialField", "(Lcom/sun/source/doctree/SerialFieldTree;Ljava/lang/Void;)Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(DocPretty, visitSerialField, $Void*, $SerialFieldTree*, $Void*)},
	{"visitSerialField", "(Lcom/sun/source/doctree/SerialFieldTree;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(DocPretty, visitSerialField, $Object*, $SerialFieldTree*, Object$*)},
	{"visitSince", "(Lcom/sun/source/doctree/SinceTree;Ljava/lang/Void;)Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(DocPretty, visitSince, $Void*, $SinceTree*, $Void*)},
	{"visitSince", "(Lcom/sun/source/doctree/SinceTree;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(DocPretty, visitSince, $Object*, $SinceTree*, Object$*)},
	{"visitStartElement", "(Lcom/sun/source/doctree/StartElementTree;Ljava/lang/Void;)Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(DocPretty, visitStartElement, $Void*, $StartElementTree*, $Void*)},
	{"visitStartElement", "(Lcom/sun/source/doctree/StartElementTree;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(DocPretty, visitStartElement, $Object*, $StartElementTree*, Object$*)},
	{"visitSummary", "(Lcom/sun/source/doctree/SummaryTree;Ljava/lang/Void;)Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(DocPretty, visitSummary, $Void*, $SummaryTree*, $Void*)},
	{"visitSummary", "(Lcom/sun/source/doctree/SummaryTree;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(DocPretty, visitSummary, $Object*, $SummaryTree*, Object$*)},
	{"visitSystemProperty", "(Lcom/sun/source/doctree/SystemPropertyTree;Ljava/lang/Void;)Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(DocPretty, visitSystemProperty, $Void*, $SystemPropertyTree*, $Void*)},
	{"visitSystemProperty", "(Lcom/sun/source/doctree/SystemPropertyTree;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(DocPretty, visitSystemProperty, $Object*, $SystemPropertyTree*, Object$*)},
	{"visitText", "(Lcom/sun/source/doctree/TextTree;Ljava/lang/Void;)Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(DocPretty, visitText, $Void*, $TextTree*, $Void*)},
	{"visitText", "(Lcom/sun/source/doctree/TextTree;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(DocPretty, visitText, $Object*, $TextTree*, Object$*)},
	{"visitThrows", "(Lcom/sun/source/doctree/ThrowsTree;Ljava/lang/Void;)Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(DocPretty, visitThrows, $Void*, $ThrowsTree*, $Void*)},
	{"visitThrows", "(Lcom/sun/source/doctree/ThrowsTree;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(DocPretty, visitThrows, $Object*, $ThrowsTree*, Object$*)},
	{"visitUnknownBlockTag", "(Lcom/sun/source/doctree/UnknownBlockTagTree;Ljava/lang/Void;)Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(DocPretty, visitUnknownBlockTag, $Void*, $UnknownBlockTagTree*, $Void*)},
	{"visitUnknownBlockTag", "(Lcom/sun/source/doctree/UnknownBlockTagTree;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(DocPretty, visitUnknownBlockTag, $Object*, $UnknownBlockTagTree*, Object$*)},
	{"visitUnknownInlineTag", "(Lcom/sun/source/doctree/UnknownInlineTagTree;Ljava/lang/Void;)Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(DocPretty, visitUnknownInlineTag, $Void*, $UnknownInlineTagTree*, $Void*)},
	{"visitUnknownInlineTag", "(Lcom/sun/source/doctree/UnknownInlineTagTree;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(DocPretty, visitUnknownInlineTag, $Object*, $UnknownInlineTagTree*, Object$*)},
	{"visitUses", "(Lcom/sun/source/doctree/UsesTree;Ljava/lang/Void;)Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(DocPretty, visitUses, $Void*, $UsesTree*, $Void*)},
	{"visitUses", "(Lcom/sun/source/doctree/UsesTree;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(DocPretty, visitUses, $Object*, $UsesTree*, Object$*)},
	{"visitValue", "(Lcom/sun/source/doctree/ValueTree;Ljava/lang/Void;)Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(DocPretty, visitValue, $Void*, $ValueTree*, $Void*)},
	{"visitValue", "(Lcom/sun/source/doctree/ValueTree;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(DocPretty, visitValue, $Object*, $ValueTree*, Object$*)},
	{"visitVersion", "(Lcom/sun/source/doctree/VersionTree;Ljava/lang/Void;)Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(DocPretty, visitVersion, $Void*, $VersionTree*, $Void*)},
	{"visitVersion", "(Lcom/sun/source/doctree/VersionTree;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(DocPretty, visitVersion, $Object*, $VersionTree*, Object$*)},
	{}
};

$InnerClassInfo _DocPretty_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.DocPretty$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"com.sun.tools.javac.tree.DocPretty$UncheckedIOException", "com.sun.tools.javac.tree.DocPretty", "UncheckedIOException", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _DocPretty_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.DocPretty",
	"java.lang.Object",
	"com.sun.source.doctree.DocTreeVisitor",
	_DocPretty_FieldInfo_,
	_DocPretty_MethodInfo_,
	"Ljava/lang/Object;Lcom/sun/source/doctree/DocTreeVisitor<Ljava/lang/Void;Ljava/lang/Void;>;",
	nullptr,
	_DocPretty_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.DocPretty$1,com.sun.tools.javac.tree.DocPretty$UncheckedIOException"
};

$Object* allocate$DocPretty($Class* clazz) {
	return $of($alloc(DocPretty));
}

void DocPretty::init$($Writer* out) {
	$set(this, lineSep, $System::getProperty("line.separator"_s));
	$set(this, out, out);
}

void DocPretty::print($DocTree* tree) {
	try {
		if (tree == nullptr) {
			print($of("/*missing*/"_s));
		} else {
			$nc(tree)->accept(this, nullptr);
		}
	} catch ($DocPretty$UncheckedIOException& ex) {
		$throwNew($IOException, $(ex->getMessage()), ex);
	}
}

void DocPretty::print(Object$* s) {
	$useLocalCurrentObjectStackCache();
	$nc(this->out)->write($($Convert::escapeUnicode($($nc($of(s))->toString()))));
}

void DocPretty::print($List* list) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(list)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($DocTree, t, $cast($DocTree, i$->next()));
			{
				print(t);
			}
		}
	}
}

void DocPretty::print($List* list, $String* sep) {
	$useLocalCurrentObjectStackCache();
	if ($nc(list)->isEmpty()) {
		return;
	}
	bool first = true;
	{
		$var($Iterator, i$, $nc(list)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($DocTree, t, $cast($DocTree, i$->next()));
			{
				if (!first) {
					print($of(sep));
				}
				print(t);
				first = false;
			}
		}
	}
}

void DocPretty::println() {
	$nc(this->out)->write(this->lineSep);
}

void DocPretty::printTagName($DocTree* node) {
	$nc(this->out)->write("@"_s);
	$nc(this->out)->write($nc($($nc(node)->getKind()))->tagName);
}

$Void* DocPretty::visitAttribute($AttributeTree* node, $Void* p) {
	$useLocalCurrentObjectStackCache();
	try {
		print($($of($nc(node)->getName())));
		$var($String, quote, nullptr);
		$init($DocPretty$1);
		switch ($nc($DocPretty$1::$SwitchMap$com$sun$source$doctree$AttributeTree$ValueKind)->get($nc(($($nc(node)->getValueKind())))->ordinal())) {
		case 1:
			{
				$assign(quote, nullptr);
				break;
			}
		case 2:
			{
				$assign(quote, ""_s);
				break;
			}
		case 3:
			{
				$assign(quote, "\'"_s);
				break;
			}
		case 4:
			{
				$assign(quote, "\""_s);
				break;
			}
		default:
			{
				$throwNew($AssertionError);
			}
		}
		if (quote != nullptr) {
			print($of($$str({"="_s, quote})));
			print($(node->getValue()));
			print($of(quote));
		}
	} catch ($IOException& e) {
		$throwNew($DocPretty$UncheckedIOException, e);
	}
	return nullptr;
}

$Void* DocPretty::visitAuthor($AuthorTree* node, $Void* p) {
	try {
		printTagName(node);
		print($of(" "_s));
		print($($nc(node)->getName()));
	} catch ($IOException& e) {
		$throwNew($DocPretty$UncheckedIOException, e);
	}
	return nullptr;
}

$Void* DocPretty::visitComment($CommentTree* node, $Void* p) {
	try {
		print($($of($nc(node)->getBody())));
	} catch ($IOException& e) {
		$throwNew($DocPretty$UncheckedIOException, e);
	}
	return nullptr;
}

$Void* DocPretty::visitDeprecated($DeprecatedTree* node, $Void* p) {
	$useLocalCurrentObjectStackCache();
	try {
		printTagName(node);
		if (!$nc($($nc(node)->getBody()))->isEmpty()) {
			print($of(" "_s));
			print($(node->getBody()));
		}
	} catch ($IOException& e) {
		$throwNew($DocPretty$UncheckedIOException, e);
	}
	return nullptr;
}

$Void* DocPretty::visitDocComment($DocCommentTree* node, $Void* p) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($List, b, $nc(node)->getFullBody());
		$var($List, t, node->getBlockTags());
		print(b);
		bool var$0 = !$nc(b)->isEmpty();
		if (var$0 && !$nc(t)->isEmpty()) {
			print($of("\n"_s));
		}
		print(t, "\n"_s);
	} catch ($IOException& e) {
		$throwNew($DocPretty$UncheckedIOException, e);
	}
	return nullptr;
}

$Void* DocPretty::visitDocRoot($DocRootTree* node, $Void* p) {
	try {
		print($of("{"_s));
		printTagName(node);
		print($of("}"_s));
	} catch ($IOException& e) {
		$throwNew($DocPretty$UncheckedIOException, e);
	}
	return nullptr;
}

$Void* DocPretty::visitDocType($DocTypeTree* node, $Void* p) {
	try {
		print($($of($nc(node)->getText())));
	} catch ($IOException& e) {
		$throwNew($DocPretty$UncheckedIOException, e);
	}
	return nullptr;
}

$Void* DocPretty::visitEndElement($EndElementTree* node, $Void* p) {
	try {
		print($of("</"_s));
		print($($of($nc(node)->getName())));
		print($of(">"_s));
	} catch ($IOException& e) {
		$throwNew($DocPretty$UncheckedIOException, e);
	}
	return nullptr;
}

$Void* DocPretty::visitEntity($EntityTree* node, $Void* p) {
	try {
		print($of("&"_s));
		print($($of($nc(node)->getName())));
		print($of(";"_s));
	} catch ($IOException& e) {
		$throwNew($DocPretty$UncheckedIOException, e);
	}
	return nullptr;
}

$Void* DocPretty::visitErroneous($ErroneousTree* node, $Void* p) {
	try {
		print($($of($nc(node)->getBody())));
	} catch ($IOException& e) {
		$throwNew($DocPretty$UncheckedIOException, e);
	}
	return nullptr;
}

$Void* DocPretty::visitHidden($HiddenTree* node, $Void* p) {
	$useLocalCurrentObjectStackCache();
	try {
		printTagName(node);
		if (!$nc($($nc(node)->getBody()))->isEmpty()) {
			print($of(" "_s));
			print($(node->getBody()));
		}
	} catch ($IOException& e) {
		$throwNew($DocPretty$UncheckedIOException, e);
	}
	return nullptr;
}

$Void* DocPretty::visitIdentifier($IdentifierTree* node, $Void* p) {
	try {
		print($($of($nc(node)->getName())));
	} catch ($IOException& e) {
		$throwNew($DocPretty$UncheckedIOException, e);
	}
	return nullptr;
}

$Void* DocPretty::visitIndex($IndexTree* node, $Void* p) {
	$useLocalCurrentObjectStackCache();
	try {
		print($of("{"_s));
		printTagName(node);
		print($of(" "_s));
		print($($nc(node)->getSearchTerm()));
		if (!$nc($($nc(node)->getDescription()))->isEmpty()) {
			print($of(" "_s));
			print($(node->getDescription()));
		}
		print($of("}"_s));
	} catch ($IOException& e) {
		$throwNew($DocPretty$UncheckedIOException, e);
	}
	return nullptr;
}

$Void* DocPretty::visitInheritDoc($InheritDocTree* node, $Void* p) {
	try {
		print($of("{"_s));
		printTagName(node);
		print($of("}"_s));
	} catch ($IOException& e) {
		$throwNew($DocPretty$UncheckedIOException, e);
	}
	return nullptr;
}

$Void* DocPretty::visitLink($LinkTree* node, $Void* p) {
	$useLocalCurrentObjectStackCache();
	try {
		print($of("{"_s));
		printTagName(node);
		print($of(" "_s));
		print($(static_cast<$DocTree*>($nc(node)->getReference())));
		if (!$nc($($nc(node)->getLabel()))->isEmpty()) {
			print($of(" "_s));
			print($(node->getLabel()));
		}
		print($of("}"_s));
	} catch ($IOException& e) {
		$throwNew($DocPretty$UncheckedIOException, e);
	}
	return nullptr;
}

$Void* DocPretty::visitLiteral($LiteralTree* node, $Void* p) {
	$useLocalCurrentObjectStackCache();
	try {
		print($of("{"_s));
		printTagName(node);
		$var($String, body, $nc($($nc(node)->getBody()))->getBody());
		bool var$0 = !$nc(body)->isEmpty();
		if (var$0 && !$Character::isWhitespace(body->charAt(0))) {
			print($of(" "_s));
		}
		print($(static_cast<$DocTree*>(node->getBody())));
		print($of("}"_s));
	} catch ($IOException& e) {
		$throwNew($DocPretty$UncheckedIOException, e);
	}
	return nullptr;
}

$Void* DocPretty::visitParam($ParamTree* node, $Void* p) {
	$useLocalCurrentObjectStackCache();
	try {
		printTagName(node);
		print($of(" "_s));
		if ($nc(node)->isTypeParameter()) {
			print($of("<"_s));
		}
		print($(static_cast<$DocTree*>($nc(node)->getName())));
		if ($nc(node)->isTypeParameter()) {
			print($of(">"_s));
		}
		if (!$nc($($nc(node)->getDescription()))->isEmpty()) {
			print($of(" "_s));
			print($(node->getDescription()));
		}
	} catch ($IOException& e) {
		$throwNew($DocPretty$UncheckedIOException, e);
	}
	return nullptr;
}

$Void* DocPretty::visitProvides($ProvidesTree* node, $Void* p) {
	$useLocalCurrentObjectStackCache();
	try {
		printTagName(node);
		print($of(" "_s));
		print($(static_cast<$DocTree*>($nc(node)->getServiceType())));
		if (!$nc($($nc(node)->getDescription()))->isEmpty()) {
			print($of(" "_s));
			print($(node->getDescription()));
		}
	} catch ($IOException& e) {
		$throwNew($DocPretty$UncheckedIOException, e);
	}
	return nullptr;
}

$Void* DocPretty::visitReference($ReferenceTree* node, $Void* p) {
	try {
		print($($of($nc(node)->getSignature())));
	} catch ($IOException& e) {
		$throwNew($DocPretty$UncheckedIOException, e);
	}
	return nullptr;
}

$Void* DocPretty::visitReturn($ReturnTree* node, $Void* p) {
	try {
		if ($nc(node)->isInline()) {
			print($of("{"_s));
		}
		printTagName(static_cast<$DocTree*>(static_cast<$BlockTagTree*>(node)));
		print($of(" "_s));
		print($($nc(node)->getDescription()));
		if ($nc(node)->isInline()) {
			print($of("}"_s));
		}
	} catch ($IOException& e) {
		$throwNew($DocPretty$UncheckedIOException, e);
	}
	return nullptr;
}

$Void* DocPretty::visitSee($SeeTree* node, $Void* p) {
	$useLocalCurrentObjectStackCache();
	try {
		printTagName(node);
		bool first = true;
		bool needSep = true;
		{
			$var($Iterator, i$, $nc($($nc(node)->getReference()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($DocTree, t, $cast($DocTree, i$->next()));
				{
					if (needSep) {
						print($of(" "_s));
					}
					needSep = (first && ($instanceOf($ReferenceTree, t)));
					first = false;
					print(t);
				}
			}
		}
	} catch ($IOException& e) {
		$throwNew($DocPretty$UncheckedIOException, e);
	}
	return nullptr;
}

$Void* DocPretty::visitSerial($SerialTree* node, $Void* p) {
	$useLocalCurrentObjectStackCache();
	try {
		printTagName(node);
		if (!$nc($($nc(node)->getDescription()))->isEmpty()) {
			print($of(" "_s));
			print($(node->getDescription()));
		}
	} catch ($IOException& e) {
		$throwNew($DocPretty$UncheckedIOException, e);
	}
	return nullptr;
}

$Void* DocPretty::visitSerialData($SerialDataTree* node, $Void* p) {
	$useLocalCurrentObjectStackCache();
	try {
		printTagName(node);
		if (!$nc($($nc(node)->getDescription()))->isEmpty()) {
			print($of(" "_s));
			print($(node->getDescription()));
		}
	} catch ($IOException& e) {
		$throwNew($DocPretty$UncheckedIOException, e);
	}
	return nullptr;
}

$Void* DocPretty::visitSerialField($SerialFieldTree* node, $Void* p) {
	$useLocalCurrentObjectStackCache();
	try {
		printTagName(node);
		print($of(" "_s));
		print($(static_cast<$DocTree*>($nc(node)->getName())));
		print($of(" "_s));
		print($(static_cast<$DocTree*>($nc(node)->getType())));
		if (!$nc($($nc(node)->getDescription()))->isEmpty()) {
			print($of(" "_s));
			print($(node->getDescription()));
		}
	} catch ($IOException& e) {
		$throwNew($DocPretty$UncheckedIOException, e);
	}
	return nullptr;
}

$Void* DocPretty::visitSince($SinceTree* node, $Void* p) {
	try {
		printTagName(node);
		print($of(" "_s));
		print($($nc(node)->getBody()));
	} catch ($IOException& e) {
		$throwNew($DocPretty$UncheckedIOException, e);
	}
	return nullptr;
}

$Void* DocPretty::visitStartElement($StartElementTree* node, $Void* p) {
	$useLocalCurrentObjectStackCache();
	try {
		print($of("<"_s));
		print($($of($nc(node)->getName())));
		$var($List, attrs, $nc(node)->getAttributes());
		if (!$nc(attrs)->isEmpty()) {
			print($of(" "_s));
			print(attrs, " "_s);
			$var($DocTree, last, $cast($DocTree, $nc($(node->getAttributes()))->get(attrs->size() - 1)));
			{
				$var($AttributeTree, attributeTree, nullptr);
				bool var$1 = node->isSelfClosing();
				if (var$1) {
					bool var$2 = $instanceOf($AttributeTree, last);
					if (var$2) {
						$assign(attributeTree, $cast($AttributeTree, last));
						var$2 = true;
					}
					var$1 = var$2;
				}
				bool var$0 = var$1;
				$init($AttributeTree$ValueKind);
				if (var$0 && $nc(attributeTree)->getValueKind() == $AttributeTree$ValueKind::UNQUOTED) {
					print($of(" "_s));
				}
			}
		}
		if (node->isSelfClosing()) {
			print($of("/"_s));
		}
		print($of(">"_s));
	} catch ($IOException& e) {
		$throwNew($DocPretty$UncheckedIOException, e);
	}
	return nullptr;
}

$Void* DocPretty::visitSummary($SummaryTree* node, $Void* p) {
	$useLocalCurrentObjectStackCache();
	try {
		print($of("{"_s));
		printTagName(node);
		if (!$nc($($nc(node)->getSummary()))->isEmpty()) {
			print($of(" "_s));
			print($(node->getSummary()));
		}
		print($of("}"_s));
	} catch ($IOException& e) {
		$throwNew($DocPretty$UncheckedIOException, e);
	}
	return nullptr;
}

$Void* DocPretty::visitSystemProperty($SystemPropertyTree* node, $Void* p) {
	try {
		print($of("{"_s));
		printTagName(node);
		print($of(" "_s));
		print($($of($nc(node)->getPropertyName())));
		print($of("}"_s));
	} catch ($IOException& e) {
		$throwNew($DocPretty$UncheckedIOException, e);
	}
	return nullptr;
}

$Void* DocPretty::visitText($TextTree* node, $Void* p) {
	try {
		print($($of($nc(node)->getBody())));
	} catch ($IOException& e) {
		$throwNew($DocPretty$UncheckedIOException, e);
	}
	return nullptr;
}

$Void* DocPretty::visitThrows($ThrowsTree* node, $Void* p) {
	$useLocalCurrentObjectStackCache();
	try {
		printTagName(node);
		print($of(" "_s));
		print($(static_cast<$DocTree*>($nc(node)->getExceptionName())));
		if (!$nc($($nc(node)->getDescription()))->isEmpty()) {
			print($of(" "_s));
			print($(node->getDescription()));
		}
	} catch ($IOException& e) {
		$throwNew($DocPretty$UncheckedIOException, e);
	}
	return nullptr;
}

$Void* DocPretty::visitUnknownBlockTag($UnknownBlockTagTree* node, $Void* p) {
	$useLocalCurrentObjectStackCache();
	try {
		print($of("@"_s));
		print($($of($nc(node)->getTagName())));
		print($of(" "_s));
		print($($nc(node)->getContent()));
	} catch ($IOException& e) {
		$throwNew($DocPretty$UncheckedIOException, e);
	}
	return nullptr;
}

$Void* DocPretty::visitUnknownInlineTag($UnknownInlineTagTree* node, $Void* p) {
	$useLocalCurrentObjectStackCache();
	try {
		print($of("{"_s));
		print($of("@"_s));
		print($($of($nc(node)->getTagName())));
		print($of(" "_s));
		print($($nc(node)->getContent()));
		print($of("}"_s));
	} catch ($IOException& e) {
		$throwNew($DocPretty$UncheckedIOException, e);
	}
	return nullptr;
}

$Void* DocPretty::visitUses($UsesTree* node, $Void* p) {
	$useLocalCurrentObjectStackCache();
	try {
		printTagName(node);
		print($of(" "_s));
		print($(static_cast<$DocTree*>($nc(node)->getServiceType())));
		if (!$nc($($nc(node)->getDescription()))->isEmpty()) {
			print($of(" "_s));
			print($(node->getDescription()));
		}
	} catch ($IOException& e) {
		$throwNew($DocPretty$UncheckedIOException, e);
	}
	return nullptr;
}

$Void* DocPretty::visitValue($ValueTree* node, $Void* p) {
	try {
		print($of("{"_s));
		printTagName(node);
		if ($nc(node)->getReference() != nullptr) {
			print($of(" "_s));
			print($(static_cast<$DocTree*>(node->getReference())));
		}
		print($of("}"_s));
	} catch ($IOException& e) {
		$throwNew($DocPretty$UncheckedIOException, e);
	}
	return nullptr;
}

$Void* DocPretty::visitVersion($VersionTree* node, $Void* p) {
	try {
		printTagName(node);
		print($of(" "_s));
		print($($nc(node)->getBody()));
	} catch ($IOException& e) {
		$throwNew($DocPretty$UncheckedIOException, e);
	}
	return nullptr;
}

$Void* DocPretty::visitOther($DocTree* node, $Void* p) {
	try {
		print($of($$str({"(UNKNOWN: "_s, node, ")"_s})));
		println();
	} catch ($IOException& e) {
		$throwNew($DocPretty$UncheckedIOException, e);
	}
	return nullptr;
}

$Object* DocPretty::visitOther($DocTree* node, Object$* p) {
	return $of(this->visitOther(node, $cast($Void, p)));
}

$Object* DocPretty::visitVersion($VersionTree* node, Object$* p) {
	return $of(this->visitVersion(node, $cast($Void, p)));
}

$Object* DocPretty::visitValue($ValueTree* node, Object$* p) {
	return $of(this->visitValue(node, $cast($Void, p)));
}

$Object* DocPretty::visitUses($UsesTree* node, Object$* p) {
	return $of(this->visitUses(node, $cast($Void, p)));
}

$Object* DocPretty::visitUnknownInlineTag($UnknownInlineTagTree* node, Object$* p) {
	return $of(this->visitUnknownInlineTag(node, $cast($Void, p)));
}

$Object* DocPretty::visitUnknownBlockTag($UnknownBlockTagTree* node, Object$* p) {
	return $of(this->visitUnknownBlockTag(node, $cast($Void, p)));
}

$Object* DocPretty::visitThrows($ThrowsTree* node, Object$* p) {
	return $of(this->visitThrows(node, $cast($Void, p)));
}

$Object* DocPretty::visitText($TextTree* node, Object$* p) {
	return $of(this->visitText(node, $cast($Void, p)));
}

$Object* DocPretty::visitSystemProperty($SystemPropertyTree* node, Object$* p) {
	return $of(this->visitSystemProperty(node, $cast($Void, p)));
}

$Object* DocPretty::visitSummary($SummaryTree* node, Object$* p) {
	return $of(this->visitSummary(node, $cast($Void, p)));
}

$Object* DocPretty::visitStartElement($StartElementTree* node, Object$* p) {
	return $of(this->visitStartElement(node, $cast($Void, p)));
}

$Object* DocPretty::visitSince($SinceTree* node, Object$* p) {
	return $of(this->visitSince(node, $cast($Void, p)));
}

$Object* DocPretty::visitSerialField($SerialFieldTree* node, Object$* p) {
	return $of(this->visitSerialField(node, $cast($Void, p)));
}

$Object* DocPretty::visitSerialData($SerialDataTree* node, Object$* p) {
	return $of(this->visitSerialData(node, $cast($Void, p)));
}

$Object* DocPretty::visitSerial($SerialTree* node, Object$* p) {
	return $of(this->visitSerial(node, $cast($Void, p)));
}

$Object* DocPretty::visitSee($SeeTree* node, Object$* p) {
	return $of(this->visitSee(node, $cast($Void, p)));
}

$Object* DocPretty::visitReturn($ReturnTree* node, Object$* p) {
	return $of(this->visitReturn(node, $cast($Void, p)));
}

$Object* DocPretty::visitReference($ReferenceTree* node, Object$* p) {
	return $of(this->visitReference(node, $cast($Void, p)));
}

$Object* DocPretty::visitProvides($ProvidesTree* node, Object$* p) {
	return $of(this->visitProvides(node, $cast($Void, p)));
}

$Object* DocPretty::visitParam($ParamTree* node, Object$* p) {
	return $of(this->visitParam(node, $cast($Void, p)));
}

$Object* DocPretty::visitLiteral($LiteralTree* node, Object$* p) {
	return $of(this->visitLiteral(node, $cast($Void, p)));
}

$Object* DocPretty::visitLink($LinkTree* node, Object$* p) {
	return $of(this->visitLink(node, $cast($Void, p)));
}

$Object* DocPretty::visitInheritDoc($InheritDocTree* node, Object$* p) {
	return $of(this->visitInheritDoc(node, $cast($Void, p)));
}

$Object* DocPretty::visitIndex($IndexTree* node, Object$* p) {
	return $of(this->visitIndex(node, $cast($Void, p)));
}

$Object* DocPretty::visitIdentifier($IdentifierTree* node, Object$* p) {
	return $of(this->visitIdentifier(node, $cast($Void, p)));
}

$Object* DocPretty::visitHidden($HiddenTree* node, Object$* p) {
	return $of(this->visitHidden(node, $cast($Void, p)));
}

$Object* DocPretty::visitErroneous($ErroneousTree* node, Object$* p) {
	return $of(this->visitErroneous(node, $cast($Void, p)));
}

$Object* DocPretty::visitEntity($EntityTree* node, Object$* p) {
	return $of(this->visitEntity(node, $cast($Void, p)));
}

$Object* DocPretty::visitEndElement($EndElementTree* node, Object$* p) {
	return $of(this->visitEndElement(node, $cast($Void, p)));
}

$Object* DocPretty::visitDocType($DocTypeTree* node, Object$* p) {
	return $of(this->visitDocType(node, $cast($Void, p)));
}

$Object* DocPretty::visitDocRoot($DocRootTree* node, Object$* p) {
	return $of(this->visitDocRoot(node, $cast($Void, p)));
}

$Object* DocPretty::visitDocComment($DocCommentTree* node, Object$* p) {
	return $of(this->visitDocComment(node, $cast($Void, p)));
}

$Object* DocPretty::visitDeprecated($DeprecatedTree* node, Object$* p) {
	return $of(this->visitDeprecated(node, $cast($Void, p)));
}

$Object* DocPretty::visitComment($CommentTree* node, Object$* p) {
	return $of(this->visitComment(node, $cast($Void, p)));
}

$Object* DocPretty::visitAuthor($AuthorTree* node, Object$* p) {
	return $of(this->visitAuthor(node, $cast($Void, p)));
}

$Object* DocPretty::visitAttribute($AttributeTree* node, Object$* p) {
	return $of(this->visitAttribute(node, $cast($Void, p)));
}

DocPretty::DocPretty() {
}

$Class* DocPretty::load$($String* name, bool initialize) {
	$loadClass(DocPretty, name, initialize, &_DocPretty_ClassInfo_, allocate$DocPretty);
	return class$;
}

$Class* DocPretty::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com