/****************************************************************************

 Copyright (c) 2013, Hans Robeers
 All rights reserved.

 BSD 2-Clause License

 Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.

 THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

****************************************************************************/

#ifndef QTUNITS_ANGLE_H
#define QTUNITS_ANGLE_H

#include "quantitybase.hpp"
#include "boost/units/systems/si/plane_angle.hpp"

namespace qt { namespace units {

    enum class AngleUnit { radian, degree };

    class QTUNITSSHARED_EXPORT Angle : public QuantityBase<AngleUnit, boost::units::si::plane_angle>
    {
    public:
        explicit Angle();
        explicit Angle(boost::units::quantity<boost::units::si::plane_angle, qreal> internalValue,
                       AngleUnit displayUnit);

        virtual ~Angle() {}
    };

}} // namespace qt::units

#endif // QTUNITS_ANGLE_H
