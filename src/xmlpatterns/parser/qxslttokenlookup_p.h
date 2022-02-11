/****************************************************************************
**
** Copyright (C) 2016 The Qt Company Ltd.
** Contact: https://www.qt.io/licensing/
**
** This file is part of the QtXmlPatterns module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see https://www.qt.io/terms-conditions. For further
** information use the contact form at https://www.qt.io/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 3 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL3 included in the
** packaging of this file. Please review the following information to
** ensure the GNU Lesser General Public License version 3 requirements
** will be met: https://www.gnu.org/licenses/lgpl-3.0.html.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 2.0 or (at your option) the GNU General
** Public license version 3 or any later version approved by the KDE Free
** Qt Foundation. The licenses are as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL2 and LICENSE.GPL3
** included in the packaging of this file. Please review the following
** information to ensure the GNU General Public License requirements will
** be met: https://www.gnu.org/licenses/gpl-2.0.html and
** https://www.gnu.org/licenses/gpl-3.0.html.
**
** $QT_END_LICENSE$
**
****************************************************************************/

//
//  W A R N I N G
//  -------------
//
// This file is not part of the Qt API.  It exists purely as an
// implementation detail.  This header file may change from version to
// version without notice, or even be removed.
//
// We mean it.
//

/* NOTE: This file is AUTO GENERATED by qautomaton2cpp.xsl. */

#ifndef qxslttokenlookup_p_H
#define qxslttokenlookup_p_H

#include <QtCore/QString>
#include <QtCore/private/qglobal_p.h>

QT_BEGIN_NAMESPACE

namespace QPatternist
{
    class XSLTTokenLookup
    {
        public:
            enum NodeName

            {
                NoKeyword,
                AnalyzeString,
                ApplyTemplates,
                As,
                Attribute,
                AttributeSet,
                ByteOrderMark,
                CallTemplate,
                CaseOrder,
                CdataSectionElements,
                Choose,
                Collation,
                Comment,
                Copy,
                CopyNamespaces,
                CopyOf,
                DataType,
                DefaultCollation,
                DefaultValidation,
                DoctypePublic,
                DoctypeSystem,
                Document,
                Element,
                Elements,
                Encoding,
                EscapeUriAttributes,
                ExcludeResultPrefixes,
                ExtensionElementPrefixes,
                Flags,
                ForEach,
                Format,
                Function,
                Href,
                Id,
                If,
                Import,
                ImportSchema,
                Include,
                IncludeContentType,
                Indent,
                InheritNamespaces,
                InputTypeAnnotations,
                Key,
                Lang,
                Match,
                MatchingSubstring,
                MediaType,
                Message,
                Method,
                Mode,
                Name,
                Namespace,
                NonMatchingSubstring,
                NormalizationForm,
                OmitXmlDeclaration,
                Order,
                Otherwise,
                Output,
                OutputVersion,
                Override,
                Param,
                PerformSort,
                PreserveSpace,
                Priority,
                ProcessingInstruction,
                Regex,
                Required,
                ResultDocument,
                SchemaLocation,
                Select,
                Separator,
                Sequence,
                Sort,
                Stable,
                Standalone,
                StripSpace,
                Stylesheet,
                Template,
                Terminate,
                Test,
                Text,
                Transform,
                Tunnel,
                Type,
                UndeclarePrefixes,
                Use,
                UseAttributeSets,
                UseCharacterMaps,
                UseWhen,
                Validation,
                ValueOf,
                Variable,
                Version,
                When,
                WithParam,
                XpathDefaultNamespace
            };

            static inline NodeName toToken(const QString &value);
            static inline NodeName toToken(const QStringRef &value);
            static NodeName toToken(const QChar *data, int length);
            static QString toString(NodeName token);


        private:
            static inline NodeName classifier2(const QChar *data);
            static inline NodeName classifier3(const QChar *data);
            static inline NodeName classifier4(const QChar *data);
            static inline NodeName classifier5(const QChar *data);
            static inline NodeName classifier6(const QChar *data);
            static inline NodeName classifier7(const QChar *data);
            static inline NodeName classifier8(const QChar *data);
            static inline NodeName classifier9(const QChar *data);
            static inline NodeName classifier10(const QChar *data);
            static inline NodeName classifier11(const QChar *data);
            static inline NodeName classifier12(const QChar *data);
            static inline NodeName classifier13(const QChar *data);
            static inline NodeName classifier14(const QChar *data);
            static inline NodeName classifier15(const QChar *data);
            static inline NodeName classifier17(const QChar *data);
            static inline NodeName classifier18(const QChar *data);
            static inline NodeName classifier20(const QChar *data);
            static inline NodeName classifier21(const QChar *data);
            static inline NodeName classifier22(const QChar *data);
            static inline NodeName classifier23(const QChar *data);
            static inline NodeName classifier26(const QChar *data);

    };

    inline XSLTTokenLookup::NodeName XSLTTokenLookup::toToken(const QString &value)
    {
        return toToken(value.constData(), value.length());
    }

    inline XSLTTokenLookup::NodeName XSLTTokenLookup::toToken(const QStringRef &value)
    {
        return toToken(value.constData(), value.length());
    }

}

QT_END_NAMESPACE

#endif
