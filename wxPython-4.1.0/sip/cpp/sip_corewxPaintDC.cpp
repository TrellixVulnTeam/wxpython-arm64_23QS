/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_core.h"

        #include <wx/dcclient.h>

        #include <wx/window.h>
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


class sipwxPaintDC : public  ::wxPaintDC
{
public:
    sipwxPaintDC( ::wxWindow*);
    ~sipwxPaintDC();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipwxPaintDC(const sipwxPaintDC &);
    sipwxPaintDC &operator = (const sipwxPaintDC &);
};

sipwxPaintDC::sipwxPaintDC( ::wxWindow*window):  ::wxPaintDC(window), sipPySelf(SIP_NULLPTR)
{
}

sipwxPaintDC::~sipwxPaintDC()
{
    sipInstanceDestroyedEx(&sipPySelf);
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_wxPaintDC(void *, const sipTypeDef *);}
static void *cast_wxPaintDC(void *sipCppV, const sipTypeDef *targetType)
{
     ::wxPaintDC *sipCpp = reinterpret_cast< ::wxPaintDC *>(sipCppV);

    if (targetType == sipType_wxClientDC)
        return static_cast< ::wxClientDC *>(sipCpp);

    if (targetType == sipType_wxWindowDC)
        return static_cast< ::wxWindowDC *>(sipCpp);

    if (targetType == sipType_wxDC)
        return static_cast< ::wxDC *>(sipCpp);

    if (targetType == sipType_wxObject)
        return static_cast< ::wxObject *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxPaintDC(void *, int);}
static void release_wxPaintDC(void *sipCppV, int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipwxPaintDC *>(sipCppV);
    else
        delete reinterpret_cast< ::wxPaintDC *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_wxPaintDC(sipSimpleWrapper *);}
static void dealloc_wxPaintDC(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipwxPaintDC *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxPaintDC(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_wxPaintDC(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxPaintDC(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipwxPaintDC *sipCpp = SIP_NULLPTR;

    {
         ::wxWindow* window;

        static const char *sipKwdList[] = {
            sipName_window,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J8", sipType_wxWindow, &window))
        {

        if (!wxPyCheckForApp()) return NULL;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxPaintDC(window);
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
static sipEncodedTypeDef supers_wxPaintDC[] = {{60, 255, 1}};

PyDoc_STRVAR(doc_wxPaintDC, "PaintDC(window)\n"
"\n"
"A wxPaintDC must be constructed if an application wishes to paint on\n"
"the client area of a window from within an EVT_PAINT() event handler.");


sipClassTypeDef sipTypeDef__core_wxPaintDC = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_wxPaintDC,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_PaintDC,
        {0, 0, 1},
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxPaintDC,
    -1,
    -1,
    supers_wxPaintDC,
    SIP_NULLPTR,
    init_type_wxPaintDC,
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
    dealloc_wxPaintDC,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_wxPaintDC,
    cast_wxPaintDC,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};