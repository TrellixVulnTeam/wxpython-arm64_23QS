/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_core.h"

        #include <wx/dcps.h>

        #include <wx/cmndata.h>
    #include <wx/setup.h>
    #include <wxPython/wxpy_api.h>
        #include <wx/gdicmn.h>
        #include <wx/bitmap.h>
        #include <wx/gdicmn.h>
        #include <wx/palette.h>
        #include <wx/colour.h>
        #include <wx/gdicmn.h>
        #include <wx/dc.h>
        #include <wx/affinematrix2d.h>
        #include <wx/pen.h>
        #include "arrayholder.h"
        #include <wx/brush.h>
        #include <wx/font.h>
        #include <wx/dc.h>
        #include <wx/region.h>
        
        
        #include <wx/icon.h>
        #include <wx/object.h>
        #include <wx/object.h>
        #include <wx/object.h>


class sipwxPostScriptDC : public  ::wxPostScriptDC
{
public:
    sipwxPostScriptDC();
    sipwxPostScriptDC(const  ::wxPrintData&);
    ~sipwxPostScriptDC();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipwxPostScriptDC(const sipwxPostScriptDC &);
    sipwxPostScriptDC &operator = (const sipwxPostScriptDC &);
};

sipwxPostScriptDC::sipwxPostScriptDC():  ::wxPostScriptDC(), sipPySelf(SIP_NULLPTR)
{
}

sipwxPostScriptDC::sipwxPostScriptDC(const  ::wxPrintData& printData):  ::wxPostScriptDC(printData), sipPySelf(SIP_NULLPTR)
{
}

sipwxPostScriptDC::~sipwxPostScriptDC()
{
    sipInstanceDestroyedEx(&sipPySelf);
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_wxPostScriptDC(void *, const sipTypeDef *);}
static void *cast_wxPostScriptDC(void *sipCppV, const sipTypeDef *targetType)
{
     ::wxPostScriptDC *sipCpp = reinterpret_cast< ::wxPostScriptDC *>(sipCppV);

    if (targetType == sipType_wxDC)
        return static_cast< ::wxDC *>(sipCpp);

    if (targetType == sipType_wxObject)
        return static_cast< ::wxObject *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxPostScriptDC(void *, int);}
static void release_wxPostScriptDC(void *sipCppV, int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipwxPostScriptDC *>(sipCppV);
    else
        delete reinterpret_cast< ::wxPostScriptDC *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_wxPostScriptDC(sipSimpleWrapper *);}
static void dealloc_wxPostScriptDC(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipwxPostScriptDC *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxPostScriptDC(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_wxPostScriptDC(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxPostScriptDC(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipwxPostScriptDC *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {

        if (!wxPyCheckForApp()) return NULL;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxPostScriptDC();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
            {
                delete sipCpp;
                return SIP_NULLPTR;
            }

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const  ::wxPrintData* printData;

        static const char *sipKwdList[] = {
            sipName_printData,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J9", sipType_wxPrintData, &printData))
        {

        if (!wxPyCheckForApp()) return NULL;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxPostScriptDC(*printData);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
            {
                delete sipCpp;
                return SIP_NULLPTR;
            }

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_wxPostScriptDC[] = {{97, 255, 1}};

PyDoc_STRVAR(doc_wxPostScriptDC, "PostScriptDC()\n"
"PostScriptDC(printData)\n"
"\n"
"This defines the wxWidgets Encapsulated PostScript device context,\n"
"which can write PostScript files on any platform.");


sipClassTypeDef sipTypeDef__core_wxPostScriptDC = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_wxPostScriptDC,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_PostScriptDC,
        {0, 0, 1},
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxPostScriptDC,
    -1,
    -1,
    supers_wxPostScriptDC,
    SIP_NULLPTR,
    init_type_wxPostScriptDC,
    SIP_NULLPTR,
    SIP_NULLPTR,
#if PY_MAJOR_VERSION >= 3
    SIP_NULLPTR,
    SIP_NULLPTR,
#else
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
#endif
    dealloc_wxPostScriptDC,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_wxPostScriptDC,
    cast_wxPostScriptDC,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};